// Last updated: 4/24/2026, 8:05:55 PM
1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        int n=prices.size();
5        int maxpro=0;
6        int bestbuy=prices[0];
7        for(int i=1;i<n;i++){
8            if(prices[i]>bestbuy){
9                maxpro=max(maxpro,prices[i]-bestbuy);
10            }
11        
12        bestbuy=min(bestbuy,prices[i]);
13        }
14        return maxpro;
15    }
16};