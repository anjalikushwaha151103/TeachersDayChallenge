// Night at the Museum (Problem 731A)
// Statement: Given the positions of letters on a circular alphabet board, calculate the minimum time needed to type a given word by moving clockwise and typing letters.

#include <iostream>
#include  <cmath> 
using namespace std;

int main(){
    string str1;
    cin>>str1;
    char curr='a';
    int cnt=0;

    for (int i=0; i<str1.size();i++){
        int cl= abs(str1[i]- curr);
        int anticl= 26- cl;
        cnt += min(cl,anticl);
        curr=str1[i];
    }
    
    cout<<cnt<<endl;

    return 0;
}