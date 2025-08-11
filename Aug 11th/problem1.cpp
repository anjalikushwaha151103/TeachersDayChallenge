// Arrival of the General (Problem 144A)
//Statement: Given the heights of soldiers in a line, determine the minimum number of swaps needed to bring the tallest soldier to the front and the shortest soldier to the end of the line.

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> line(n);
    for (int i = 0; i < n; i++) {
        cin >> line[i];
    }

    int max_val = INT_MIN;
    int max_index = 0;
    for (int i = 0; i < n; i++) {
        if (line[i] > max_val) {
            max_val = line[i];
            max_index = i;
        }
    }

    int min_val = INT_MAX;
    int min_index = 0;
    for (int i = 0; i < n; i++) {
        if (line[i] <= min_val) { 
            min_val = line[i];
            min_index = i;
        }
    }

    int moves = max_index + (n - 1 - min_index);
    if (max_index > min_index) {
        moves--; 
    }

    cout << moves << endl;
    return 0;
}
