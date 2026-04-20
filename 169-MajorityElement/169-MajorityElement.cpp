// Last updated: 4/20/2026, 11:05:05 AM
1class Solution {
2public:
3    int majorityElement(vector<int>& nums) {
4        int n=nums.size();
5        sort(nums.begin(),nums.end());
6        int freq=1;
7        int ans=nums[0];
8        for(int i=1;i<n;i++){
9            if(nums[i]==nums[i-1]){
10                freq++;
11
12            }else{
13                freq=1;ans=nums[i];
14            }
15            if (freq>n/2){
16                return ans;
17            }
18
19
20
21
22
23
24         }return ans;
25    }  
26    
27};