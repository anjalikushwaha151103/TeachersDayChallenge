//TEAM
//Statement - Three friends—Petya, Vasya, and Tonya—will solve a problem only if at least two of them are sure about the solution.  
// Input: An integer n (1 ≤ n ≤ 1000), followed by n lines each with three 0/1 integers indicating whether Petya, Vasya, and Tonya are sure about each problem.  
// Output: Print the number of problems they will solve.

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n][3];
    int cnt=0;
    for(int i=0;i<n;i++){
        int cnt1=0;
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
            if(arr[i][j]){
                cnt1++;
            }
        }
        if(cnt1>=2){
            cnt++;
        }
    }
    cout<<cnt;

    return 0;

}