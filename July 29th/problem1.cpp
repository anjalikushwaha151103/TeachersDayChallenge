// MERGE INTERVALS
// Statement - Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=  intervals.size();
        vector<vector<int>> ans;
        
        sort(intervals.begin(), intervals.end());

        for(int i=0; i<n;i++){
            if( ans.empty() || ans.back()[1]<intervals[i][0]){
                ans.push_back(intervals[i]);
            }else{
                ans.back()[1]= max(ans.back()[1],intervals[i][1]);
            }
        }
        return ans;
    }
};