//PRESENTS
//Statement - Given an array where the ith element is the friend that gave a present to friend i, reconstruct the distribution so each friend knows from whom they received their gift.

#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector <pair<int,int>> gifts;
    for(int i=1;i<=n;i++){
        int igift;
        cin>>igift;
        gifts.push_back({igift,i});
    }

    sort(gifts.begin(),gifts.end());

    for(auto it: gifts){
        cout<<it.second<<" ";
    }

    return 0;
} 