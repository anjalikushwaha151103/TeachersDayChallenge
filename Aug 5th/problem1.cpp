//BOY OR GIRL
//Statement -  Given a username, check the number of distinct characters in it. If the count is even, print “CHAT WITH HER!”; otherwise, print “IGNORE HIM!”.

#include <iostream>
#include <set>
using namespace std;

int main(){
    set <char> st;
    string name;
    cin>>name;
    for(int i=0;i<name.size();i++){
        st.insert(name[i]);
    }

    int n= st.size();
    if(n%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }else{
        cout<<"IGNORE HIM!"<<endl;
    }

    return 0;

}