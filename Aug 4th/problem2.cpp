//WORD
//Statement - Vasya wants a browser extension to convert each word to either all lowercase or all uppercase, changing as few letters as possible. If uppercase letters are more, convert the whole word to uppercase; if lowercase are more or equal, convert it to lowercase. Given a word s (1 to 100 letters, mixed case), output the corrected word.

#include <iostream>
#include <cctype>
#include <algorithm>
using namespace std;

int main(){
    
    string str1;
    cin>>str1;
    string str2=str1;
    
    int lower=0;
    int upper=0;

    for(auto it: str1){
        if(isupper(it)) upper++;
        else lower++;

    }

    if(upper>lower){
        transform(str1.begin(), str1.end(), str2.begin(), ::toupper);
    }else{
        transform(str1.begin(), str1.end(), str2.begin(), ::tolower);
    }

    cout<<str2<<endl;

    return 0;
}