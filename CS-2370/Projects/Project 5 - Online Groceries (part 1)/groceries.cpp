#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <vector>
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
};

class Item {
    public:
        int itemId;
        string description;
        double price;
};

vector<Customer> customers;
vector<Item> items;

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

void one_customer_order() {
    int customerNumberInputed;
    int itemNumberInputed;
    int itemsPurchased = 0;
    double totalCost = 0.00;
    bool customerFound = false;

    cout << "There are " << customers.size() << " customers." << endl;
    cout << "There are " << items.size() << " items." << endl;
    cout << "Please enter a customer number: ";
    cin >> customerNumberInputed;

    for (auto customer : customers) {
        if (customer.customerId == customerNumberInputed) {
            customerFound = true;
            break;
        }
    }

    if (!customerFound) {
        cout << "Customer not found." << endl;
        return;
    }

    do {
        bool itemFound = false;

        cout << "Enter an item number to purchase: ";
        cin >> itemNumberInputed;

        for (auto item : items) {
            if (item.itemId == itemNumberInputed) {
                itemFound = true;
                cout << fixed << setprecision(2) << "Item found: " << item.description << " - $" << item.price << endl;
                itemsPurchased++;
                totalCost += item.price;
                break;
            }
        }

        if (itemNumberInputed == 0) {
            break;
        }
        else if (!itemFound) {
            cout << "Item not found. Please try a different item number." << endl;
        }
    } while (itemNumberInputed != 0);

    cout << "Total items purchased: " << itemsPurchased << endl;
    cout << fixed << setprecision(2) << "Total cost: $" << totalCost << endl;
}

int main () {
    read_customers("customers.txt");
    read_items("items.txt");
     one_customer_order();

    return 0;
}
