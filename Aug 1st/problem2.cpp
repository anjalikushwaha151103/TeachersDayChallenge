//BEAUTIFUL MATRIX
//Statement - You have a 5×5 matrix with one '1' and the rest zeros. You can swap adjacent rows or columns. Find the minimum moves to bring the '1' to the center cell.
//INPUT: Five lines of five integers (0 or 1), with exactly one '1'.
//OUTPUT: Minimum number of moves needed.

#include <iostream>
using namespace std;

int main() {
    int matrix[5][5];
    int row=0;
    int col=0;

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>matrix[i][j];
            if(matrix[i][j]==1){
                row=i;
                col=j;
            }   
        }
    }
    int steps= abs(row-2)+abs(col-2);
    cout<<steps<<endl;

    return 0;
}