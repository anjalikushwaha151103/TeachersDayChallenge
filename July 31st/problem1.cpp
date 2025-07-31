//WATERMELON
/*Statement - Pete and Billy bought a watermelon weighing w kilos. They want to split it into two parts, each with an even positive weight (not necessarily equal). Help them determine if this is possible.
Input: an integer w (1 ≤ w ≤ 100).
Output: print YES if it can be divided into two even parts, and NO otherwise.*/

#include <iostream>
using namespace std;

int main(){
   int w;
   cin>>w;
   if(w>2 && w%2==0){
    cout<<"YES"<<endl;
   }else{
    cout<<"NO"<<endl;
   }

   return 0;
}
