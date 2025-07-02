#include <iostream>
using namespace std;

// Class to help with output
class Output {
    public:
        // Output primary highway
        void oPrimary(int hn, int d) {
            switch (d) {
                case 0:
                    cout << "I-" << hn << " is primary, going east/west." << endl;
                    break;
                case 1:
                    cout << "I-" << hn << " is primary, going north/south."<< endl;
                    break;
            }
        }
        
        // Output auxiliary highway
        void oAuxiliary(int hn, int d) {
            switch (d) {
                case 0:
                    cout << "I-" << hn << " is auxiliary, serving I-" << hn % 100 << ", going east/west." << endl;
                    break;
                case 1:
                    cout << "I-" << hn <<  " is auxiliary, serving I-" << hn % 100 << ", going north/south." << endl;
                    break;
            }
        }
};

int main() {
    // Init variables
    Output output;
    int highwayNumber;
   
    // Take input
    cin >> highwayNumber;

    // If valid primary highway
    if (highwayNumber > 0 && highwayNumber < 100) {
        output.oPrimary(highwayNumber, highwayNumber % 2);
    }
    // If valid auxiliary highway
    else if (highwayNumber > 99 && highwayNumber < 1000 && highwayNumber % 100 != 0) {
        output.oAuxiliary(highwayNumber, highwayNumber % 2);
    }
    // If invalid highway number
    else {
        cout << highwayNumber << " is not a valid interstate highway number." << endl;
    }

   return 0;
}
