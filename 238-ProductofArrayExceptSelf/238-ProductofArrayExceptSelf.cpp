// Last updated: 4/25/2026, 10:54:48 PM
1class Solution {
2public:
3    vector<int> productExceptSelf(vector<int>& nums) {
4        int n=nums.size();
5       vector<int>ans(n,1);
6       
7       for(int i=1;i<n;i++){
8         ans[i]=ans[i-1]*nums[i-1];
9       }
10       int suffex=1;
11       for(int j=n-2;j>=0;j--){
12        suffex=suffex*nums[j+1];
13        ans[j]*=suffex;
14       }
15     
16       return ans;
17
18
19    }
20};