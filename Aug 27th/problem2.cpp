//  Hit the Lottery (Problem 996A)
// Statement: Find the minimum number of bills needed to make up a given amount using denominations of 1, 5, 10, 20, and 100.

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
