// GEORGE AND ACCOMMODATION
//Statement - George and Alex want to live together in a dormitory with n rooms. Each room i currently has pi occupants and can hold qi people (pi ≤ qi). Count how many rooms have at least 2 free places for both of them.
//INPUT: Integer n (1 ≤ n ≤ 100), number of rooms.For each room i, two integers pi and qi (0 ≤ pi ≤ qi ≤ 100)
//OUTPUT: Number of rooms where at least 2 places are free (qi - pi ≥ 2) so George and Alex can move in.

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n][2];
    int cnt=0;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
        if(arr[i][1]-arr[i][0]>=2) cnt++;
    }
    cout<<cnt<<endl;

    return 0;
}