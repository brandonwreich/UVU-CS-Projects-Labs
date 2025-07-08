#include <iostream>
#include <vector>
using namespace std;

void OutputRoster(vector<int> jerseyNumbers, vector<int> ratings) {
    cout << "ROSTER" << endl;
    for (unsigned int i = 0; i < jerseyNumbers.size(); i++) {
        cout << "Player " << i + 1 << " -- Jersey number: " << jerseyNumbers[i] << ", Rating: " << ratings[i] << endl;
    }

    cout << endl;
}

void PrintMenu() {
    cout << "MENU" << endl;
    cout << "a - Add player" << endl;
    cout << "d - Remove player" << endl;
    cout << "u - Update player rating" << endl;
    cout << "r - Output players above a rating" << endl;
    cout << "o - Output roster" << endl;
    cout << "q - Quit" << endl;

    cout << endl;
    cout << "Choose an option:" << endl;
}

void AddPlayer(vector<int> &jerseyNumbers, vector<int> &ratings) {
    int jersey;
    int rating;

    cout << "Enter a new player's jersey number:" << endl;
    cin >> jersey;
    cout << "Enter the player's rating:" << endl;
    cin >> rating;
    cout << endl;

    jerseyNumbers.push_back(jersey);
    ratings.push_back(rating);
}

void RemovePlayer(vector<int> &jerseyNumbers, vector<int> &ratings) {
    int jersey;

    cout << "Enter a jersey number:" << endl;
    cin >> jersey;

    for (unsigned int i = 0; i < jerseyNumbers.size(); i++) {
        if (jerseyNumbers[i] == jersey) {
            jerseyNumbers.erase(jerseyNumbers.begin() + i);
            ratings.erase(ratings.begin() + i);
            break;
        }
    }
}

void UpdatePlayerRating(vector<int> &jerseyNumbers, vector<int> &ratings) {
    int jersey;
    int rating;

    cout << "Enter a jersey number:" << endl;
    cin >> jersey;
    cout << "Enter a new rating for player:" << endl;
    cin >> rating;

    for (unsigned int i = 0; i < jerseyNumbers.size(); i++) {
        if (jerseyNumbers[i] == jersey) {
            ratings[i] = rating;
            break;
        }
    }
}

void OutputPlayersAboveRating(vector<int> jerseyNumbers, vector<int> ratings) {
    int rating;

    cout << "Enter a rating:" << endl;
    cin >> rating;

    cout << "ABOVE " << rating << endl;
    for (unsigned int i = 0; i < jerseyNumbers.size(); i++) {
        if (ratings[i] > rating) {
            cout << "Player " << i + 1 << " -- Jersey number: " << jerseyNumbers[i] << ", Rating: " << ratings[i] << endl;
        }
    }

    cout << endl;
}

int main() {
    // Init variables
    char menuInput;
    vector<int> jerseyNumbers;
    int jersey;
    vector<int> ratings;
    int rating;

    // Take initalinput
    for (int i = 0; i < 5; i++) {
        cout << "Enter player " << i + 1 << "'s jersey number:" << endl;
        cin >> jersey;
        cout << "Enter player " << i + 1 << "'s rating:" << endl;
        cin >> rating;
        cout << endl;
        jerseyNumbers.push_back(jersey);
        ratings.push_back(rating);
    }

    OutputRoster(jerseyNumbers, ratings);

    do {
        PrintMenu();
        
        cin >> menuInput;

        switch (menuInput) {
            case 'a':
                AddPlayer(jerseyNumbers, ratings);
                break;
            case 'd':
                RemovePlayer(jerseyNumbers, ratings);
                break;
            case 'u':
                UpdatePlayerRating(jerseyNumbers, ratings);
                break;
            case 'r':
                OutputPlayersAboveRating(jerseyNumbers, ratings);
                break;
            case 'o':
                OutputRoster(jerseyNumbers, ratings);
                break;
        }

    } while (menuInput != 'q');

   return 0;
}
