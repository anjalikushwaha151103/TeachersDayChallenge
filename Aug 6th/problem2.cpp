//FOOTBALL
//Statement - Given a string representing football player positions as '0's and '1's, determine if the situation is dangerous. It’s labeled "dangerous" if there are at least seven consecutive players
#include <iostream>
#include <climits>
using namespace std;

int main(){
    string str1;
    cin>>str1;

    int max1= INT_MIN;
    int max0= INT_MIN;
    int cnt0=0;
    int cnt1=0;
    for(auto it:str1){
        if(it=='0'){
            cnt0++;
            max0= max(max0,cnt0);
        }else{
            cnt0=0;
        }

        if(it=='1'){
            cnt1++;
            max1= max(max1,cnt1);
        }else{
            cnt1=0;
        }
    }

    if(max0>=7 || max1>=7){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }


    return 0;
} 