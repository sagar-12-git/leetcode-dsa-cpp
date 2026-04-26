// Last updated: 4/26/2026, 11:01:39 PM
1class Solution {
2public:
3    void sortColors(vector<int>& nums) {
4        int n=nums.size();
5        for(int i=0;i<n;i++){
6            for(int j=i+1;j<n;j++){
7                if(nums[i]>nums[j]){
8                    int temp=nums[i];
9                    nums[i]=nums[j];
10                    nums[j]=temp;
11                }
12            }
13        }
14        
15    }
16};