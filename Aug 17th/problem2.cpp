// Xenia and Divisors (Problem 342A)
// Statement: Given a number n, find the smallest divisor of n greater than 1. Also, find the other divisor such that their product is n.

#include <iostream>
#include <vector>
#include <array>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<int> freq(8, 0); 
    for (int i = 0; i < n; i++) {
        int x; 
        cin >> x;
        freq[x]++;
    }

    vector<array<int, 3>> ans;
    if (freq[5] > 0 || freq[7] > 0 || freq[1] != freq[2] + freq[3] || freq[2] < freq[4] || freq[6] != freq[2] + freq[3] - freq[4]) {
        cout << -1 << "\n";
        return 0;
    }

    while (freq[4] > 0) {
        ans.push_back({1, 2, 4});
        freq[1]--; 
        freq[2]--; 
        freq[4]--;
    }

    while (freq[2] > 0) {
        ans.push_back({1, 2, 6});
        freq[1]--; 
        freq[2]--; 
        freq[6]--;
    }

    while (freq[3] > 0) {
        ans.push_back({1, 3, 6});
        freq[1]--; 
        freq[3]--; 
        freq[6]--;
    }

    for (int i = 1; i <= 7; i++) {
        if (freq[i] != 0) {
            cout << -1 << "\n";
            return 0;
        }
    }

    for (const auto &g : ans) {
        cout << g[0] << " " << g[1] << " " << g[2] << "\n";
    }
    
    return 0;
}