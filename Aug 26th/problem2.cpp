// Divisibility Problem (Problem 1328A)
// Statement: For a given number, determine if and how it can be divided or analyzed for divisibility with specific conditions.

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        int a;
        int b;
        cin>>a>>b;
        int res;
        
        if(a%b==0){
            res=0;
        }else{
            res=b-(a%b);
        }
        cout<<res<<endl;
        
    }
}