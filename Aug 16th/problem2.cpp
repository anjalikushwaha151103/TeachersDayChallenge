// GukiZ and Contest (Problem 551A)
// Statement: Given n students and their ratings, reconstruct the expected contest rankings where higher ratings get better positions and ties share the same position.

#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> rating(n);
    for (int i = 0; i < n; i++) {
        cin >> rating[i];
    }

    vector<int> position(n);

    for (int i = 0; i < n; i++) {
        int better = 0;
        for (int j = 0; j < n; j++) {
            if (rating[j] > rating[i]) {
                better++;
            }
        }
        position[i] = better + 1;
    }

    for (int i = 0; i < n; i++) {
        cout << position[i] << " ";
    }
    cout << endl;

    return 0;
}
