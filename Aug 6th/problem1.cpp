// DRINKS
//Statement - Given the percentages of orange juice in n drinks, calculate what percentage of orange juice the final cocktail will have if you mix equal amounts of each drink.

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int sum=0;

    for(int i=0; i<n;i++){
        int percent;
        cin>>percent;
        sum+= percent;
    }

    double f_percent = static_cast<double>(sum) / n;
    cout<<f_percent<<endl;

    return 0;
} 