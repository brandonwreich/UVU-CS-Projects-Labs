#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    // Init variables
    string input;
    string cleanedInput;
    string reversedInput = "";
    bool isPalindrome;

    // Take input
    getline(cin, input);
    cleanedInput = input;

    // Clean input
    erase(cleanedInput, ' ');

    // Reverse the input
    for (int i = cleanedInput.size() - 1; i >= 0; i--) {
        reversedInput += cleanedInput[i];
    }

    // Check if palindrome
    isPalindrome = (cleanedInput == reversedInput);

    // Output result
    if (isPalindrome) {
        cout << "palindrome: " << input << endl;
    }
    else {
        cout << "not a palindrome: " << input << endl;
    }
   
   return 0;
}
