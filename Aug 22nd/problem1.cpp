//  Three Pairwise Maximums (Problem 1385A)
// Statement: Given three numbers representing the pairwise maximums of three hidden numbers, find any valid triple of hidden numbers that correspond to these maximums, or determine it's impossible.

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;
        vector<int> v = {x, y, z};
        sort(v.begin(), v.end()); 

        if (v[1] != v[2]) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
            cout << v[0]<< " " << v[0] << " " << v [2]<< "\n";
        }
    }
    return 0;
}
