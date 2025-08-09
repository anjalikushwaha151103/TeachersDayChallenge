//  I Wanna Be the Guy
// Statement - Given n levels of a game and the levels each of two players can pass, determine if, working together, they can pass all the levels.

#include <iostream>
#include <set>
using namespace std;

int main(){
    int n;
    cin>>n;
    set <int> st;

    int p,q;
    cin>>p;
    for(int i=0;i<p;i++){
        int pi;
        cin>>pi;
        st.insert(pi);
    }
    cin>>q;
    for(int i=0;i<q;i++){
        int qi;
        cin>>qi;
        st.insert(qi);
    }
    int len=st.size();

    if (len==n){
        cout << "I become the guy." << endl;  
    }
    else{
        cout << "Oh, my keyboard!" << endl;
    }
    return 0;
} 