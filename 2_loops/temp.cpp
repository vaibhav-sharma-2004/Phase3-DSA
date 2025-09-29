#include <iostream>
#include <bitset>
using namespace std;

int main() {
    unsigned int n = 5; // Example number
    cout << __builtin_popcount(n) << endl; // Output: 4
    return 0;
}