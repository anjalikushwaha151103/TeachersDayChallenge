// Registration System (Problem 4C)
// Statement: For each new username registration request, if the username has not appeared before, register it directly. If it already exists, append a number (count of previous occurrences) to the username and register the new username.

#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, int> db;

    for (int i = 0; i < n; i++) {
        string name;
        cin >> name;

        if (db.find(name) == db.end()) {
            cout << "OK" << endl;
            db[name]=0; 
        } else {
            db[name]++;
            cout << name << db[name] << endl;
        }
    }

    return 0;
}
