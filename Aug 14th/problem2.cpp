//  Bit++ (Problem 282A)
// Statement: Given a sequence of statements (++X, X++, --X, X--), output the final value of variable X after all statements, starting from 0.

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int x=0;
    for (int i=0;i<n;i++){
        string temp;
        cin>>temp;
        if(temp=="X++" || temp=="++X"){
            x+=1;
        }else if(temp=="X--" || temp=="--X"){
            x -=1;
        }
    }
    cout<<x<<endl;

    return 0;

}