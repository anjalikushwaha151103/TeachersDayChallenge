// Xenia and Ringroad
// Statement - In a city with houses arranged in a circular ringroad, Xenia must visit a list of houses in order. Moving only clockwise, calculate the minimum time needed to complete all her tasks given the sequence of target houses.

#include <iostream>
using namespace std;

int main(){
    int n;
    int m;
    cin>>n>>m;
    int tasks[m];
    
    for(int i=0;i<m;i++){
        cin>>tasks[i];
    }

    long long cost=0;
    int cur=1;
    for(int i=0;i<m;i++){
        if(i!=0 && tasks[i]<tasks[i-1]){
            cost+= n-cur+tasks[i];
            
        }else if(i!=0 && tasks[i]==tasks[i-1]){
            cost +=0;
        }
        else{
            cost = cost+ (tasks[i]-cur);
        }
        cur=tasks[i];
    }
    cout<<cost<<endl;

    return 0;
} 