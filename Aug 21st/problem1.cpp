// Little Elephant and Bits (Problem 258A)
// Statement: Given a binary string, delete exactly one character so that the resulting string is lexicographically smallest possible.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();
    bool removed = false;

    for (int i = 0; i < n; ++i) {
        if (!removed && s[i] == '0') {
            removed = true;
            continue;
        }
        if (i == n - 1 && !removed) continue;
        cout << s[i];
    }
    cout << endl;
    return 0;
}
