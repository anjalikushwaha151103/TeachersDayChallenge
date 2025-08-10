// Sereja and Dima (Problem 381A)
// Statement: Two players take turns picking either the leftmost or rightmost card from a row of cards with different values. The player with the highest total wins.

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    int s1=0;
    int s2=0;
    vector <int> cards (n,0);
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            cards[i] +=temp;
        }

    int i=0;
    while(!cards.empty() && i<n){
        int a=cards[0];
        int l=cards[cards.size()-1];
        if(a>l){
            if(i%2==0) s1+= a;
            else s2+=a;
            cards.erase(cards.begin()+0);
        }else{
            if(i%2==0) s1+= l;
            else s2+=l;
            cards.pop_back();
        }
        i++;
    }
    cout<<s1<<" "<<s2<<endl;
    
    return 0;
}