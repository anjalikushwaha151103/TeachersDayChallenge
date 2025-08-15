//Valera and Plates (Problem 369A)
// Statement: Valera has a limited number of clean bowls and plates and plans to eat dishes of two types over n days. The first type requires a bowl, while the second can be eaten from either a bowl or a plate. The goal is to minimize the number of times Valera must wash a plate or bowl, assuming he uses resources optimally.

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,m,k;
    cin>>n>>m>>k;
    vector <int> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            if(m>0) {
                m--;
                cnt++;
            }
        }else if(arr[i]==2){
            if(k>0 ){
                k--;
                cnt++;
            }else if(m>0){
                m--;
                cnt++;
            }
            
        }
    }

    int ans=n-cnt;
    cout<<ans<<endl;

}