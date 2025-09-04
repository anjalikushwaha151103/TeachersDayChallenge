// BerSU Ball (Problem 489/B)
// Statement: Given lists of boys' and girls' skill levels, pair them up such that the difference between each pair is at most 1, maximizing the number of pairs.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int n, m;
    cin >> n;
    vector<int> boys(n);
    for (int i = 0; i < n; ++i) cin >> boys[i];
    cin >> m;
    vector<int> girls(m);
    for (int i = 0; i < m; ++i) cin >> girls[i];

    sort(boys.begin(), boys.end());
    sort(girls.begin(), girls.end());

    int i = 0, j = 0, count = 0;
    while (i < n && j < m) {
        if (abs(boys[i] - girls[j]) <= 1) {
            ++count;
            ++i;
            ++j;
        } else if (boys[i] < girls[j]) {
            ++i;
        } else {
            ++j;
        }
    }
    cout << count << endl;

    return 0;
}
