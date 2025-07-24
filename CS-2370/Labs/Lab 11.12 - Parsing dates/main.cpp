#include <iostream>
#include <string>

using namespace std;

int GetMonthAsInt(string month) {
	int monthInt = 0;
	
	if (month == "January")
		monthInt = 1;
	else if (month == "February")
		monthInt = 2;
	else if (month == "March")
		monthInt = 3;
	else if (month == "April")
		monthInt = 4;
	else if (month == "May")
		monthInt = 5;
	else if (month == "June")
		monthInt = 6;
	else if (month == "July")
		monthInt = 7;
	else if (month == "August")
		monthInt = 8;
	else if (month == "September")
		monthInt = 9;
	else if (month == "October")
		monthInt = 10;
	else if (month == "November")
		monthInt = 11;
	else if (month == "December")
		monthInt = 12;
	return monthInt;
}

int main () {
	string input = "";
    int month = 0;
    string day = "";
    string year = "";
    
    while (input != "-1") {
        getline(cin, input);

        int i = 0;

        while (isalpha(input[i])) {
            i++;
        }

        month = GetMonthAsInt(input.substr(0, i));
        i++;

        if(isdigit(input[i + 1])) {
            day = input.substr(i, 2);
            i += 2;
        }
        else {
            day = input[i];
            i++;
        }

        if(input[i] == ',') {
            i += 2;
            year = input.substr(i, 4);
            cout << month << "-" << day << "-" << year << endl;
        }
    }

}
