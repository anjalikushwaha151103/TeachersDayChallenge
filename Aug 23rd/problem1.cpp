// XXXXX (Problem 1364A)
// Statement: Given an array and a number x, find the length of the longest subarray whose sum is not divisible by x. If no such subarray exists, print -1.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }

        if (sum % x != 0) {
            cout << n << endl;
            continue;
        }

        int left = -1, right = -1;

        for (int i = 0; i < n; i++) {
            if (a[i] % x != 0) {
                left = i;
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--) {
            if (a[i] % x != 0) {
                right = i;
                break;
            }
        }

        if (left == -1) {
            cout << -1 << "\n";
        } else {
            int ans = n - min(left + 1, n - right);
            cout << ans << endl;
        }
    }
    return 0;
}
