//  Even Odds (Problem 318A)
// Statement: Given n numbers arranged first as all odds, then all evens, find the value at position k in this new order (1-indexed).

#include <iostream>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    long long oddCount = (n + 1) / 2; 

    if (k <= oddCount) {
        cout << 2 * k - 1 << endl; 
    } else {
        cout << 2 * (k - oddCount) << endl; 
    }

    return 0;
}
