// Last updated: 4/20/2026, 11:14:32 AM
1class Solution {
2public:
3    int majorityElement(vector<int>& nums) {
4      int freq=0,ans=0;
5      for(int i =0;i<nums.size();i++){
6        if(freq==0){
7            ans=nums[i];
8        }
9        if(ans==nums[i]){
10            freq++;
11        }else{
12            freq--;
13        }
14      }return ans;
15    }  
16    
17};