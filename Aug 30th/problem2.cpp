// Captain Flint and Crew Recruitment (Problem 1388A)
// Statement: Find how many crew members can be recruited based on their skill levels and the captain's criteria using a greedy selection process.

#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int p1 = 6, p2 = 10, p3 = 14;
        int sum = p1 + p2 + p3;

        if (n > sum) {
            int fourth = n - sum;
            if (fourth != p1 && fourth != p2 && fourth != p3 && fourth > 0) {
                cout << "YES\n" << p1 << " " << p2 << " " << p3 << " " << fourth << "\n";
            } else {
                p3 = 15;
                sum = p1 + p2 + p3;
                fourth = n - sum;

                if (fourth != p1 && fourth != p2 && fourth != p3 && fourth > 0) {
                    cout << "YES\n" << p1 << " " << p2 << " " << p3 << " " << fourth << "\n";
                } else {
                    cout << "NO\n";
                }
            }
        } else {
            cout << "NO"<<endl;
        }
    }
    return 0;
}
