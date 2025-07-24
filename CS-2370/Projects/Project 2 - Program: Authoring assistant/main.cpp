#include <iostream>
#include <string>
using namespace std;

void PrintMenu() {
    cout << "MENU" << endl;
    cout << "c - Number of non-whitespace characters" << endl;
    cout << "w - Number of words" << endl;
    cout << "f - Find text" << endl;
    cout << "r - Replace all !'s" << endl;
    cout << "s - Shorten spaces" << endl;
    cout << "q - Quit" << endl;

    cout << endl;
    cout << "Choose an option:" << endl;
}

int GetNumOfNonWSCharacters(string text) {
    int count = 0;

    for(unsigned int i = 0; i < text.length(); i++) {
        if(!isspace(text[i])) {
            count++;
        }
    }

    return count;
}

int GetNumOfWords(string text) {
    int count = 0;

    for(unsigned int i = 0; i < text.length(); i++) {
        if(isspace(text[i]) && isalpha(text[i + 1])) {
            count++;
        }
    }

    return count + 1;
}

int FindText(string textToFind, string text) {
    int count = 0;

    for(unsigned int i = 0; i < text.length(); i++) {
        for (unsigned int j = 0; j < textToFind.length(); j++) {
            if(text[i + j] != textToFind[j]) {
                break;
            }
            else if((text[i + j] == textToFind[j]) && j == textToFind.length() - 1) {
                count++;
            }
        }
    }

    return count;
}

void ReplaceExclamation(string& text) {
    for(unsigned int i = 0; i < text.length(); i++) {
        if(text[i] == '!') {
            text[i] = '.';
        }
    }
}

void ShortenSpace(string& text) {
    for(unsigned int i =  0; i < text.length(); i++) {
        while(isspace(text[i]) && isspace(text[i + 1])) {
            text.erase(i, 1);
        }
    }
}

void ExecuteMenu(char input, string text) {
    int count = 0;
    string textToFind;

    switch(input) {
        case 'c':
            count = GetNumOfNonWSCharacters(text);
            cout << "Number of non-whitespace characters: " << count << endl;
            cout << endl;
            break;
        case 'w':
            count = GetNumOfWords(text);
            cout << "Number of words: " << count << endl;
            cout << endl;
            break;
        case 'f':
            cout << "Enter a word or phrase to be found:" << endl;
            cin.ignore();
            getline(cin, textToFind);
            count = FindText(textToFind, text);
            cout << "\"" << textToFind << "\" instances: " << count << endl;
            cout << endl; 
            break;
        case 'r':
            ReplaceExclamation(text);
            cout << "Edited text: " << text << endl;
            cout << endl;
            break;
        case 's':
            ShortenSpace(text);
            cout << "Edited text: " << text << endl;
            cout << endl;
            break;
    }
}

int main() {
    char input;
    string text;
    cout << "Enter a sample text:" << endl;
    cout << endl;
    getline(cin, text);

    cout << "You entered: " << text << endl;
    cout << endl;

    do {
        PrintMenu();
        cin >> input;

        ExecuteMenu(input, text);

    } while (input != 'q');

   return 0;
}
