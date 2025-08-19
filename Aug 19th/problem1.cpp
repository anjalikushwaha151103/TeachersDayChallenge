//  BerSU Ball (Problem 489B)
// Statement: There are n boys and m girls, each with a skill value. Create the maximum number of boy-girl pairs such that the absolute difference between their skill values is no more than 1 (each boy and girl can be in at most one pair).

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
