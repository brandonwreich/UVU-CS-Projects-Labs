#include <iostream>
using namespace std;

// Class to help build the arrow
class Arrow {
    public:
        void createBase(int baseDigit) {
            int count = 0;

            while(count < 5)
            {
                cout << baseDigit;
                count++;
            }
        }

        void createHead(int headDigit, int iteration) {
            int count = 0;

            while (count < iteration)
            {
                cout << headDigit;
                count++;
            }

            cout << endl;
        }
};

int main() {
    // Init variables
   Arrow arrow;
   int baseDigit;
   int headDigit;

   // Take input
   cin >> baseDigit;
   cin >> headDigit;

   // Output arrow
   cout << "     ";
   arrow.createHead(headDigit, 1);

   cout << "     ";
   arrow.createHead(headDigit, 2);
   arrow.createBase(baseDigit);
   arrow.createHead(headDigit, 3);
   arrow.createBase(baseDigit);
   arrow.createHead(headDigit, 4);
   arrow.createBase(baseDigit);
   arrow.createHead(headDigit, 3);

   cout << "     ";
   arrow.createHead(headDigit, 2);
   
   cout << "     ";
   arrow.createHead(headDigit, 1);

   return 0;
}
