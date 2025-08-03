//XENIA AND SUM
//Statement - Xenia is learning addition with numbers 1, 2, and 3. She can only calculate sums where summands are in non-decreasing order.Given a sum of numbers 1, 2, and 3 (like "1+3+2+1"), rearrange it so the summands are sorted in non-decreasing order (e.g., "1+1+2+3") and print the result.
//INPUT: A string s representing the sum (digits 1, 2, 3 separated by “+”, length ≤ 100).
//OUTPUT: Print the rearranged sum with summands sorted in non-decreasing order. 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    string str1;
    string str2;
    vector <char> ans;

    cin>>str1;
    
    for(int i=0; i<str1.size();i=i+2){
        ans.push_back(str1[i]);
    }
    sort(ans.begin(),ans.end());

    for (char c : ans) {
        str2 += c;
        str2 += "+";
    }

    str2.pop_back();

    cout<<str2<<endl;
    
    
    
}