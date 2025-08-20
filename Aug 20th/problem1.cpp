// Lucky Sum of Digits (Problem 109A)
// Statement: Given an integer n, find the minimum lucky number (consisting only of digits 4 and 7) whose digits sum up exactly to n. If none exists, print -1.

#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int min_len = INT_MAX;
    int best_a = -1;
    int best_b = -1;
    
    for (int b = 0; b <= n / 7; b++) {
        int remainder = n - b * 7;
        if (remainder >= 0 && remainder % 4 == 0) {
            int a = remainder / 4;
            if (a + b < min_len) {
                min_len = a + b;
                best_a = a;
                best_b = b;
            }
        }
    }
    
    if (best_a == -1) {
        cout << -1 << endl;
    } else {
        for (int i = 0; i < best_a; i++) cout << '4';
        for (int i = 0; i < best_b; i++) cout << '7';
        cout << endl;
    }

    return 0;
}
