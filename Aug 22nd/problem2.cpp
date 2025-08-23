// Domino (Problem 353A)
// Statement: Given a grid with some squares blocked, calculate the maximum number of dominoes that can be placed without overlapping blocked squares or each other. Each domino covers two adjacent cells.

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum_x = 0, sum_y = 0;
    bool can_swap = false;
    for (int i = 0; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        sum_x += x;
        sum_y += y;
        if ((x % 2) != (y % 2)) { 
            can_swap = true;
        }
    }

    if (sum_x % 2 == 0 && sum_y % 2 == 0) {
        cout << 0 << endl;
    }else if ((sum_x % 2) != (sum_y % 2)) {
        cout << -1 << endl;
    }else if (can_swap) {
        cout << 1 << endl;
    }else {
        cout << -1 << endl;
    }
    return 0;
}
