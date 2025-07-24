#include <iostream>
#include <iomanip>              // needed for setprecision() and fixed
#include <cmath>                // needed for ceil()
using namespace std;

int main() {
   // Init variables
   const double SALES_TAX = 0.07;

   double wallHeight;
   double wallWidth;
   double wallArea;
   double paintCost;
   double paintSubTotal;
   double paintTax;
   double gallonsNeeded;

   int paintCans;

   // Take input
   cin >> wallHeight;
   cin >> wallWidth;
   cin >> paintCost;

   // Calculate and output area
   wallArea = wallHeight * wallWidth;
   cout << "Wall area: " << fixed << setprecision(1) << wallArea << " sq ft" << endl;

   // Calculate and output gallons of paint needed
   gallonsNeeded = wallArea / 350.0;
   cout << "Paint needed: " << fixed << setprecision(3) << gallonsNeeded << " gallons" << endl;

   paintCans = ceil(gallonsNeeded);
   cout << "Cans needed: " << paintCans << " can(s)" << endl;

   // Calculate and output paint paint cost
   paintSubTotal = paintCans * paintCost;
   paintTax = paintSubTotal * SALES_TAX;

   cout << "Paint cost: $" << fixed << setprecision(2) << paintSubTotal << endl;
   cout << "Sales tax: $" << paintTax << endl;
   cout << "Total cost: $" << paintSubTotal + paintTax << endl;

   return 0;
}
