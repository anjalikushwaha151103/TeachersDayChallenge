// PETYA AND STRINGS
//Statement - Little Petya got two same-length strings of uppercase and lowercase letters. He wants to compare them lexicographically, ignoring case.
//Input: Two lines, each with a string (1 to 100 chars, same length).
//Output: Print "-1" if the first string is less, "1" if greater, and "0" if equal, case-insensitive

#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;

int main(){
    string str1;
    string str2;
    cin>>str1;
    cin>>str2;
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
    if(str1>str2){
        cout<<1<<endl;   
    }else if(str1<str2){
        cout<<-1<<endl;
    }else{
        cout<<0<<endl;
    }

    return 0;
    
}