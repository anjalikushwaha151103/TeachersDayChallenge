// Fox And Snake (Problem 510A)
// Statement: Print a snake pattern on an n by m grid. Odd rows are fully filled with '#', while even rows have a '#' at one end alternating between left and right, with the rest being '.'

#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            for (int j = 0; j < m; j++) cout << "#";
        } else {
            if ((i / 2) % 2 == 1) {
                for (int j = 0; j < m - 1; j++) cout << ".";
                cout << "#";
            } else {
                cout << "#";
                for (int j = 0; j < m - 1; j++) cout << ".";
            }
        }
        cout << endl;
    }
    return 0;
}
