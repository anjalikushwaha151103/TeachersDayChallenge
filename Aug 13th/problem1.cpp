# include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        int n,m;
        cin>>n>>m;
        int ans=(n*m)/2 +(n*m)%2;
        cout<<ans<<endl;
    }
    return 0;
}