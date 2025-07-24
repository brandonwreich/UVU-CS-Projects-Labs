#include <iostream>
using namespace std;

int main() {
   int arrowBaseHeight;
   int arrowBaseWidth;
   int arrowHeadWidth;

   cin >> arrowBaseHeight;
   cin >> arrowBaseWidth;

   // arrowHeadWidth cannot be less than arrowBaseWidth
   do {
        cin >> arrowHeadWidth;
    } while (arrowHeadWidth <= arrowBaseWidth);

    // Output base
   for(int i = 0; i < arrowBaseHeight; i++) {
        for (int j = 0; j < arrowBaseWidth; j++) {
            cout << "*";
        }

        cout << endl;
    }

   // Output head
   for(int i = 0; i < arrowHeadWidth; i++) {
        for(int j = 0; j < arrowHeadWidth - i; j++) {
            cout << "*";
        }

        cout << endl;
    }

   return 0;
}
