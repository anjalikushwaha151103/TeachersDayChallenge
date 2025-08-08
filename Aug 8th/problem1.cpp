// Is your horseshoe on the other hoof? (Problem 228A)
// Statement: Given the colors of four horseshoes Valera has, determine the minimum number he needs to buy so that all four are of distinct colors.

#include <iostream>
#include <set>
using namespace std;

int main(){
    set <int> st;

    int s1,s2,s3,s4;
    cin >> s1 >> s2 >> s3 >> s4;
    st.insert(s1);
    st.insert(s2);
    st.insert(s3);
    st.insert(s4);

    int unique_cnt= st.size();
    int mini=4-unique_cnt;
    cout<<mini<<endl;

    return 0;
} 
