//TOP K FREQUENT ELEMENTS
//Statement - Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.

#include <vector>
#include <unordered_map>
#include <queue>
#include <algorithm>  
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        vector<int> ans;
        for (int num : nums) {
            mpp[num]++;
        }
        priority_queue<
            pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>
        > minHeap;

        for (auto& p : mpp) {
            minHeap.push({p.second, p.first});
            if (minHeap.size() > k) minHeap.pop();
        }
        while (!minHeap.empty()) {
            ans.push_back(minHeap.top().second);
            minHeap.pop();
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};