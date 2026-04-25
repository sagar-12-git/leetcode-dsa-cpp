// Last updated: 4/25/2026, 4:41:20 PM
1class Solution {
2public:
3    vector<int> productExceptSelf(vector<int>& nums) {
4        int n=nums.size();
5       vector<int>ans(n,1);
6       vector<int>priffex(n,1);
7       vector<int>suffix(n,1);
8       for(int i=1;i<n;i++){
9         priffex[i]=priffex[i-1]*nums[i-1];
10       }
11       for(int j=n-2;j>=0;j--){
12        suffix[j]=suffix[j+1]*nums[j+1];
13       }
14       for(int i=0;i<n;i++){
15        ans[i]=priffex[i]*suffix[i];
16       }
17       return ans;
18
19
20    }
21};