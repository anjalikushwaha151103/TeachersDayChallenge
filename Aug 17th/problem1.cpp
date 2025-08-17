// Jzzhu and Children (Problem 450A)
// Statement: Jzzhu distributes candies to children standing in a queue. Each child wants a certain number of candies. He gives candies in fixed portions per turn. Children who are not satisfied return to the end of the queue. Find which child will be the last to get all the candies.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int lastChild = 0;
    int maxTurns = 0;

    for (int i = 0; i < n; i++) {
        int turns = (a[i] + m - 1) / m;  
        if (turns >= maxTurns) {
            maxTurns = turns;
            lastChild = i + 1; 
        }
    }

    cout << lastChild << endl;
    return 0;
}
