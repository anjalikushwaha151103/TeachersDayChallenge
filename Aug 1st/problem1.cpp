//NEXT ROUND
//Statement - Given n participants’ scores in non-increasing order and an integer k, count how many have a positive score that is at least as high as the k-th place score.
// INPUT: First line: n k (1 ≤ k ≤ n ≤ 50)
//        Second line: n integers, scores 0–100, in non-increasing order
// OUTPUT: Number of participants who advance (score ≥ k-th score and > 0)



#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    vector <int> scores(n);
    for(int i=0; i<n;i++){
        cin>>scores[i];
    }
    
    int cnt=0;
    int kscore= scores[k-1];
    for(int i=0; i<n;i++){
        if(scores[i]>=kscore && scores[i]>0){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    
    return 0;
}