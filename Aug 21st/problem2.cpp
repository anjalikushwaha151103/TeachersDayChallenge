// Magic Numbers (Problem 320A)
// Statement: A magic number is a number formed by concatenating the numbers 1, 14, and 144 in any order and any number of times. For example, 14144 and 141414 are magic numbers, but 1444, 514, and 414 are not. Given a number, determine if it is a magic number.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int i = 0, n = s.length();
    bool ok = true;
    while (i < n) {
        if (s.substr(i, 3) == "144") {
            i += 3;
        } else if (s.substr(i, 2) == "14") {
            i += 2;
        } else if (s[i] == '1') {
            i += 1;
        } else {
            ok = false;
            break;
        }
    }
    if (ok) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
