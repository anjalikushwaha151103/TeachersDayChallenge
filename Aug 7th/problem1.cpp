//DUBSTEP
//Statement - Given a remixed song where "WUB" is inserted multiple times between, before, or after words, reconstruct the original song by removing all "WUB"s and inserting single spaces as necessary.

#include <iostream>
using namespace std;

int main(){
    string str1;
    cin>>str1;
    string str2 ="";
    string word;
    
    bool flag= true;
    for (int i=0;i<str1.size();i++){
        if(i+2<str1.size() && str1[i]=='W'&& str1[i+1]=='U' && str1[i+2]=='B'){
            i+=2;
            if (!flag) {
                if (!str2.empty() && str2.back()!= ' ') {
                    str2 += " ";

                }else {
                    continue;
                }
            }
        }else{
            flag=false;
            str2 += str1[i];
        }         
    }
    if (!str2.empty() && str2.back() == ' ') {
        str2.pop_back();
        }
    cout<<str2<<endl;

    return 0;
} 