#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

class Output {
    public:
        void outputFrequency(double frequency) {
            cout << fixed << setprecision(2) << frequency << " Hz" << endl;
        }
};

int main() {
    Output output;
    int n = 0;
    double input;
    double frequency;
    double r = pow(2.0, (1.0/12.0));

    cin >> input;
    output.outputFrequency(input);

   while (n < 3) {
    frequency = input * pow(r, n + 1);
    output.outputFrequency(frequency);
    n++;
   }

   return 0;
}
