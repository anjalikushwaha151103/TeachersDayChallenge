//  Tavas and SaDDas (Problem 535B)
// Statement: You are given a lucky number n, where lucky numbers are positive integers consisting only of digits 4 and 7. If we sort all lucky numbers in increasing order, find the 1-based index of n among all lucky numbers.

#include <iostream>
using namespace std;

int main() {
    string n;
    cin >> n;

    int len = n.size();
    long long index = 0;

    for (int i = 1; i < len; i++) {
        index += (1LL << i);
    }

    long long binaryValue = 0;
    for (char c : n) {
        binaryValue <<= 1;
        if (c == '7') binaryValue |= 1;
    }
    index += (binaryValue + 1);
    cout << index << endl;
    return 0;
}

