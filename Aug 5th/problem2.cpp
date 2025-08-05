//STONES ON THE TABLE
//Statement -  Given a sequence of colored stones, find the minimum number of stones to remove so that no two adjacent stones have the same color.

#include <iostream>
using namespace std;

int main(){
    int n;
    string s;
    cin>>n;
    cin>>s;

    int cnt=0;
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]) cnt++;
    }
    cout<<cnt<<endl;

    return 0;
} 