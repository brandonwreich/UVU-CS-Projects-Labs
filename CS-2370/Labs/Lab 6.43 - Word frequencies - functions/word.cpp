#include <iostream>
#include <vector> 
#include <string>
#include <cctype>
using namespace std;

int GetWordFrequency(vector<string> wordsList, string currWord) {
    int count = 0;

    for (unsigned int i = 0; i < wordsList.size(); i++) {
        bool isSameWord = true;

        if(currWord.length() == wordsList.at(i).length()) {
            for(unsigned int j = 0; j < currWord.length(); j++) {
                if(tolower(currWord[j]) != tolower(wordsList.at(i)[j])) {
                    isSameWord = false;
                }
            }
        }
        else {
            isSameWord = false;
        }

        if(isSameWord) {
            count++;
        }
    }

    return count;
}

int main() {
    int vectorSize;
    cin >> vectorSize;

    vector<string>wordList(vectorSize);
    string word;
    for(int i = 0; i < vectorSize; i++) {
        cin >> word;
        wordList.at(i) = word;
    }

    for(int i = 0; i < vectorSize; i++) {
        int count = GetWordFrequency(wordList, wordList.at(i));

        cout << wordList.at(i) << " " << count << endl;
    }

   return 0;
}
