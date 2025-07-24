#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

void processArguments(const vector<string>& args, vector<string>& result) {
    for (const string& arg : args) {
        if (arg.length() > 0 && arg[0] == '@') {
            string filename = arg.substr(1);
            ifstream file(filename);

            if (file.is_open()) {
                vector<string> fileArgs;
                string word;

                while (file >> word) {
                    fileArgs.push_back(word);
                }
                file.close();

                processArguments(fileArgs, result);
            } else {
                result.push_back(arg);
            }
        } else {
            result.push_back(arg);
        }
    }
}

int main(int argc, char* argv[]) {
    vector<string> arguments;
    vector<string> result;

    for (int i = 1; i < argc; i++) {
        arguments.push_back(string(argv[i]));
    }

    processArguments(arguments, result);

    cout << result.size() << " items:" << endl << endl;

    for (const string& item : result) {
        cout << item << endl;
    }

    return 0;
}
