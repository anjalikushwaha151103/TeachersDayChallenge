#include <iostream>
#include <vector>
#include <unordered_map>

//GROUP ANAGRAMS
//Statement - Given an array of strings strs, group the anagrams together. You can return the answer in any order.
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string, vector<string>> hash;
        vector<vector<string>> ans;
        for (int i=0; i<strs.size();i++){
            string key=strs[i];
            sort(key.begin(), key.end());
            hash[key].push_back(strs[i]);
        }
        for(auto &it: hash){
            ans.push_back(it.second);            
        }

        return ans;

    }
};