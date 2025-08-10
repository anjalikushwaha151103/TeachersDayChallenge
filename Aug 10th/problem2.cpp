// Cheap Travel (Problem 466A)
// Statement: Ann must decide how to buy subway tickets for n rides, choosing between single-ride tickets and special multi-ride tickets to minimize her total cost.

#include <iostream>
using namespace std;

int main(){
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int cost=0;

    int p1=((n/m)*b)+(n%m)*a;
    int p2= 0;
    if(n%m>0){
        p2= ((n/m)*b)+b;
    }else{
        p2= ((n/m)*b);
    }
    int p3= n*a;

    cost=min(p3,min(p1,p2));
    cout<<cost<<endl;
    
    return 0;
}


