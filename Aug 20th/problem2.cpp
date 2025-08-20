// Pashmak and Flowers (Problem 459B)
// Statement: Given the beauty values of flowers, find the difference between the maximum and minimum beauty, and the number of ways to choose two flowers to achieve this difference.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> flowers(n);
    
    for (int i = 0; i < n; i++) {
        cin >> flowers[i];
    }
    
    int min_beauty = *min_element(flowers.begin(), flowers.end());
    int max_beauty = *max_element(flowers.begin(), flowers.end());
    long long count_min = 0, count_max = 0;
    
    for (int b : flowers) {
        if (b == min_beauty) count_min++;
        if (b == max_beauty) count_max++;
    }
    
    long long max_diff = max_beauty - min_beauty;
    long long ways = 0;
    
    if (max_diff == 0) {
        ways = (long long)n * (n - 1) / 2;
    } else {
        ways = count_min * count_max;
    }
    
    cout << max_diff << " " << ways <<endl;
    return 0;
}
