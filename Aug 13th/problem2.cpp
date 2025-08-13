// Young Physicist (Problem 69A)
// Statement: Given the forces acting on a body in 3D space as vectors, determine if the body is in equilibrium by checking if the sum of all force components (x, y, z) is zero.

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum1 = 0, sum2 = 0, sum3 = 0;

    for (int i = 0; i < n; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        sum1 += x;
        sum2 += y;
        sum3 += z;
    }

    if (sum1 == 0 && sum2 == 0 && sum3 == 0)
        cout << "YES"<<endl;
    else
        cout << "NO"<<endl;

    return 0;
}
