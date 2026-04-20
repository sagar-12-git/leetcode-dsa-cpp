// Last updated: 4/20/2026, 9:38:30 AM
1class Solution {
2public:
3    int maxSubArray(vector<int>& nums) {
4        int max1=INT_MIN;
5        int sum=0;
6        for(int val: nums){
7            sum=sum+val;
8            max1=max(max1,sum);
9            if(sum<0){
10                sum = 0;
11
12            }
13        }return max1;
14    }
15};