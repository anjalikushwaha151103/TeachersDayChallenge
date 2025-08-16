// Kyoya and Photobooks (Problem 554A)
// Statement: Kyoya has a photobook represented by a string of lowercase letters. He wants to create "special edition" photobooks by inserting one extra photo (any letter from 'a' to 'z') anywhere. Find the number of distinct photobooks possible

#include <iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.size();
    int ans=((26-n)*(n+1))+(n*n);
    cout<<ans<<endl;

}