// Vanya and Lanterns (Problem 492B)
// Statement: Given n lanterns placed along a street of length l, find the minimum radius each lantern’s light needs to have so that the entire street from 0 to l is illuminated.

#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
    int n;
    long long l;
    cin >> n >> l;

    vector<long long> lanterns(n);
    for (int i = 0; i < n; i++) {
        cin >> lanterns[i];
    }

    sort(lanterns.begin(), lanterns.end());

    long long max_gap = 0;
    for (int i = 1; i < n; i++) {
        long long gap = lanterns[i] - lanterns[i - 1];
        if (gap > max_gap) {
            max_gap = gap;
        }
    }
    double d = max({
        (double)max_gap / 2,
        (double)lanterns[0],
        (double)(l - lanterns[n - 1])
    });

    cout << fixed << setprecision(9) << d << endl;

    return 0;
}
