// Soldier and Cards (Problem 546C)
// Statement: Two players each start with a pile of cards. In every round, both play their top card. The player with the higher card takes both cards and places them at the bottom of their pile. The game continues until one player has all cards or a loop is detected. Find the minimum number of rounds to finish the game, or output -1 if it never ends.

#include <iostream>
#include <deque>
#include <set>
using namespace std;

int main() {
    int n, k1, k2;
    cin >> n;
    cin >> k1;
    deque<int> p1, p2;
    for (int i = 0; i < k1; ++i) {
        int x;
        cin >> x;
        p1.push_back(x);
    }
    cin >> k2;
    for (int i = 0; i < k2; ++i) {
        int x;
        cin >> x;
        p2.push_back(x);
    }

    set<pair<deque<int>, deque<int>>> seen;
    int rounds = 0;

    while (!p1.empty() && !p2.empty()) {
        if (seen.count({p1, p2})) {
            cout << -1 << endl;
            return 0;
        }
        seen.insert({p1, p2});

        int c1 = p1.front(); p1.pop_front();
        int c2 = p2.front(); p2.pop_front();

        if (c1 > c2) {
            p1.push_back(c2);
            p1.push_back(c1);
        } else {
            p2.push_back(c1);
            p2.push_back(c2);
        }
        ++rounds;
    }

    if (p1.empty())
        cout << rounds << " 2" << endl;
    else
        cout << rounds << " 1" << endl;

    return 0;
}
