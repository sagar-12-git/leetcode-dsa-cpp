// Last updated: 4/20/2026, 9:28:50 AM
1class Solution {
2public:
3    int singleNumber(vector<int>& nums) {
4        int ans=0;
5        for(int val: nums){
6            ans=ans^val;
7
8
9        }return ans;
10        
11    }
12};