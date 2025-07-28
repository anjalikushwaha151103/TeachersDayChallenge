// BEST TIME TO BUY AND SELL STOCKS
//Statement - You are given an array prices where prices[i] is the price of a given stock on the ith day.You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock. Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice= INT_MAX;
        int maxprofit=0;
        for( auto it: prices){
            if(it<minprice){
                minprice=it;
            }else{
                maxprofit=max(maxprofit, it- minprice);
            }
        }
        return maxprofit;
    }
};