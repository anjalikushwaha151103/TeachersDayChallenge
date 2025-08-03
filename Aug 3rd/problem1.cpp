//NEARLY LUCKY NUMBER
//Statement - A lucky number is a positive integer containing only digits 4 and 7.A number is nearly lucky if the count of its lucky digits is itself a lucky number.
//INPUT: A single integer n (1 ≤ n ≤ 10^18).
//OUPUT: Print "YES" if n is nearly lucky; otherwise print "NO".

#include <iostream>
using namespace std;

int main(){
    string n;
    cin>>n;
    int cnt=0;
    for(char it: n){
        if(it=='7' || it=='4'){
            cnt++;
        }
    }

    
    string ans = "YES";
    if (cnt == 0) ans="NO";
    else{
        int tmp = cnt;
        while (tmp > 0) {
            int l_digit = tmp % 10;
            if (l_digit != 4 && l_digit != 7) {
                ans = "NO";
                break;
            }
            tmp = tmp / 10;
        }
    }

    cout<<ans<<endl;
    return 0;
}
