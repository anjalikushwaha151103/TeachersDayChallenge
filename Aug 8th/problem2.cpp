// Queue at the School (Problem 266B)
// Statement: Given a queue of boys ('B') and girls ('G') and a number of seconds, simulate the process where every second, each boy who is immediately followed by a girl swaps places, repeating for the given number of seconds.

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    int sec;
    cin>>n>>sec;
    string line;
    cin >> line;
    
    while(sec!=0){
        for(int i=0;i<n-1;){
            if(line[i]=='B' && line[i+1]=='G'){
                swap(line[i],line[i+1]);
                i=i+2;
            }else{
                i++;
            }  
        }
        sec--;
    }
    for(auto it : line){
        cout<<it;
    }

    return 0;
} 