//Word Capitalization (Problem 281A)
//Statement: Given a word, capitalize its first letter while leaving the rest of the letters unchange

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string str1;
    cin >> str1;

    if (!str1.empty()) {
        str1[0] = toupper(str1[0]);
    }

    cout << str1 << endl;
    return 0;
}
