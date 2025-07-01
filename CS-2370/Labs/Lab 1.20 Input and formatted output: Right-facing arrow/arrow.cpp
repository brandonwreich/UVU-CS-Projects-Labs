#include <iostream>
using namespace std;

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
    Arrow arrow;
   int baseDigit;
   int headDigit;

   /* Type your code here. */
   cin >> baseDigit;
   cin >> headDigit;

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
