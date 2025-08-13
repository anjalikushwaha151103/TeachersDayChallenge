// Park Lighting (Problem 1358A)
// Statement: Given dimensions of a park as an n by m grid, determine the minimum number of yellow lamps needed to light up the park if each lamp lights up two adjacent squares.

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