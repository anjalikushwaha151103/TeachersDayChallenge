// T-Primes (Problem 230B)
// Statement: A number t is called T-prime if it has exactly three distinct positive divisors. Given an array of positive integers, determine for each whether it is a T-prime.

#include <iostream>
#include <vector>
#include <set>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    const long long limit = 1000000;
    vector<bool> prime(limit + 1, true);
    prime[0] = prime[1] = false;

    for (long long i = 2; i * i <= limit; ++i) {
        if (prime[i]) {
            for (long long j = i * i; j <= limit; j += i) {
                prime[j] = false;
            }
        }
    }

    set<long long> t_primes;
    for (long long i = 2; i <= limit; ++i) {
        if (prime[i]) {
            t_primes.insert(i * i);
        }
    }

    for (int i = 0; i < n; ++i) {
        long long x;
        cin >> x;
        if (t_primes.find(x) != t_primes.end()) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
