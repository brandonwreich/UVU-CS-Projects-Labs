#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Class to help with output
class Output {
    public:
        void outputFrequency(double frequency) {
            cout << fixed << setprecision(2) << frequency << " Hz" << endl;
        }
};

int main() {
    // Init variables
    Output output;

    int n = 0;

    double input;
    double frequency;
    double r = pow(2.0, (1.0/12.0));

    // Take input
    cin >> input;

    // Output inital frequency
    output.outputFrequency(input);

    // Output next 3 higher key frequencies
    while (n < 3) {
        frequency = input * pow(r, n + 1);
        output.outputFrequency(frequency);
        n++;
    }

   return 0;
}
