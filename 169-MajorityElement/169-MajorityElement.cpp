// Last updated: 4/20/2026, 10:52:30 AM
1class Solution {
2public:
3    int majorityElement(vector<int>& nums) {
4        int n=nums.size();
5        for(int val : nums){
6            int  freq=0;
7            for( int i: nums){
8                if(i==val){
9                    freq++;
10
11                }
12            }if(freq>n/2){
13                return val;
14            }
15        }return -1;
16    }  
17    
18};