#include <iostream>
#include <string>
using namespace std;

int main() {
    // Init variables
    string firstName;
    string middleName;
    string lastName;

    // Take input
    cin >> firstName;
    cin >> middleName;
    cin >> lastName;

    // Output formatted name
    (lastName == "") 
        ? cout << middleName << ", " << firstName.at(0) << "." << endl
        : cout << lastName << ", " << firstName.at(0) << "." << middleName.at(0) << "." << endl;

   return 0;
}
