#include <bitset>
#include <iostream>
using namespace std;

int main() {
    cout << "Enter the integer that holds the bits: ";
    unsigned int n;
    cin >> n;

    cout << "Enter the rightmost bit position: ";
    unsigned int k;
    cin >> k;

    cout << "Enter the leftmost bit position: ";
    unsigned int m;
    cin >> m;

    // Insert your code here
    unsigned int mask = (n & (((1 << (m-k+1)) - 1) << k)) >> k;
    cout << " Extracting bits " << k << " through " << m << " from " << n << " = " << bitset<32>(n) << ": Result = " << mask << " = " << bitset<32>(mask);
}
