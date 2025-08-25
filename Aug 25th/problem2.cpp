// Gravity Flip (Problem 405A)
// Statement: Given the heights of cubes in columns, determine the new arrangement of cubes after gravity flips and cubes fall to the right side (sorted heights).

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << "\n";

    return 0;
}
