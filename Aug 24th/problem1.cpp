// Hit the Lottery (Problem 996A)
// Statement: Given an amount of money n, find the minimum number of bills required to withdraw the amount using denominations of 1, 5, 10, 20, and 100.

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int cnt=0;

    cnt+=n/100;
    n=n%100;

    cnt+=n/20;
    n=n%20;

    cnt+=n/10;
    n=n%10;

    cnt+=n/5;
    n=n%5;

    cnt+=n;
    cout<<cnt;

    return 0;
}
