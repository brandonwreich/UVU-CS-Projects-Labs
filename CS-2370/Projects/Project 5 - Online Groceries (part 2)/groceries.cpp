#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <sstream>
#include "split.h"

using namespace std;

class Customer {
    public:
    int customerId;
    string name;
    string street;
    string city;
    string state;
    string zip;
    string phone;
    string email;
    
    string print_detail() {
        return "Customer ID #" + to_string(customerId) + ":\n" + name + ", ph. " + phone + ", email: " + email + "\n" + street + "\n" + city + ", " + state + " " + zip;
    }
};

vector<Customer> customers;

class Item {
    public:
        int itemId;
        string description;
        double price;
};

vector<Item> items;

class LineItem {
    public:
        int item_id;
        int qty;

    double sub_total() const {
        return qty * find_if(items.begin(), items.end(), [this](const Item& item) { return item.itemId == item_id; })->price;
    }
};

class Payment {
    public:
        double amount;

        virtual string print_detail() {
            return "";
        }
};

class Credit : public Payment {
    public:
        string card_number;
        string expiration;

        string print_detail() {
            return "Payed by Credit card " + card_number + ", exp. " + expiration;
        }
};

class PayPal : public Payment {
    public:
        string paypal_id;

        string print_detail() {
            return "Paid by Paypal ID: " + paypal_id;
        }
};

class WireTransfer : public Payment {
    public:
        string bank_id;
        string account_id;

        string print_detail() {
            return "Paid by Wire transfer from Bank ID " + bank_id + ", Account# " + account_id;
        }
};

class Order {
    public:
        int order_Id;
        string order_date;
        int cust_id;
        vector<LineItem> line_items;
        Payment* payment;

        double total() const {
            double total = 0.0;

            for (const auto& item : line_items) {
                total += item.sub_total();
            }

            return total;
        }

        string print_order() const {
            stringstream ss;
            ss << fixed << setprecision(2);

            string result = string("===========================\n") + "Order #"
                + to_string(order_Id) + ", Date: "
                + order_date + "\n" + "Amount: $";

            ss.str("");
            ss << total();
            result += ss.str() + ", " + payment->print_detail() + "\n\n";

            auto customer_iter = find_if(customers.begin(), customers.end(), [this](const Customer& c) { return c.customerId == this->cust_id; });
            if (customer_iter != customers.end()) {
                result += customer_iter->print_detail() + "\n\n";
            }

            result += "Order Detail:\n";

            for (const auto& item : line_items) {
                auto item_iter = find_if(items.begin(), items.end(), [&item](const Item& i) { return i.itemId == item.item_id; });

                if (item_iter != items.end()) {
                    ss.str("");
                    ss << item_iter->price;
                    result += "\tItem " + to_string(item.item_id) + ": \"" + item_iter->description + "\", " + to_string(item.qty) + " @ " + ss.str() + "\n";
                }
            }

            return result;
        }
};

list<Order> orders;

void read_customers(string filename) {
    ifstream file(filename);
    string line;

    while (getline(file, line)) {
        auto fields = split(line, ',');

        Customer customer;

        customer.customerId = stoi(fields[0]);
        customer.name = fields[1];
        customer.street = fields[2];
        customer.city = fields[3];
        customer.state = fields[4];
        customer.zip = (fields[5]);
        customer.phone = fields[6];
        customer.email = fields[7];

        customers.push_back(customer);
    }
}

void read_items(string filename) {
    ifstream file(filename);
    string line;

    while (getline(file, line)) {
        auto fields = split(line, ',');

        Item item;

        item.itemId = stoi(fields[0]);
        item.description = fields[1];
        item.price = stod(fields[2]);

        items.push_back(item);
    }
}

void read_orders(string filename) {
    ifstream file(filename);
    string line;

    while (getline(file, line)) {
        auto fields = split(line, ',');

        Order order;

        order.cust_id = stoi(fields[0]);
        order.order_Id = stoi(fields[1]);
        order.order_date = fields[2];

        for (int i = 3; i < fields.size(); i++) {
            auto item = split(fields[i], '-');
            LineItem line_item;
            line_item.item_id = stoi(item[0]);
            line_item.qty = stoi(item[1]);
            order.line_items.push_back(line_item);
        }

        sort(order.line_items.begin(), order.line_items.end(), [](const LineItem& a, const LineItem& b) { return a.item_id < b.item_id; });

        getline(file, line);
        auto payment_fields = split(line, ',');

        Payment* payment = nullptr;

        if (payment_fields[0] == "1") {
            Credit* credit_payment = new Credit();
            credit_payment->card_number = payment_fields[1];
            credit_payment->expiration = payment_fields[2];
            payment = credit_payment;
        }
        else if (payment_fields[0] == "2") {
            PayPal* paypal_payment = new PayPal();
            paypal_payment->paypal_id = payment_fields[1];
            payment = paypal_payment;
        }
        else if (payment_fields[0] == "3") {
            WireTransfer* wire_payment = new WireTransfer();
            wire_payment->bank_id = payment_fields[1];
            wire_payment->account_id = payment_fields[2];
            payment = wire_payment;
        }

        order.payment = payment;

        orders.push_back(order);
    }
}

int main() {
        read_customers("customers.txt");
        read_items("items.txt");
        read_orders("orders.txt");

        ofstream ofs("order_report.txt");

        for (const auto& order: orders) {
            ofs << order.print_order() << endl;
        }
    }
