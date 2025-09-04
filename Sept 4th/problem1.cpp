//  Kefa and First Steps (Problem 580/A)
// Statement: Given a sequence of numbers, find the length of the longest contiguous segment where each number is at least as large as the previous one.
# include <iostream>
# include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;

    int cnt=1;
    int max_cnt=1;

    vector <int> seq(n);
    for(int i=0;i<n;i++){
        cin>>seq[i];
        if (i>0){
            if(seq[i]>=seq[i-1]) {
                cnt++;
                max_cnt=max(max_cnt,cnt);
            }
            else cnt=1;
        }
    }

    cout<<max_cnt<<endl;

}