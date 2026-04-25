// Last updated: 4/25/2026, 3:46:44 PM
1class Solution {
2public:
3    int maxArea(vector<int>& height) {
4        int n=height.size();
5        int lf=0,lr=n-1;
6        int maxarea=0;
7        while(lf<lr){
8            int w=lr-lf;
9            int ht = min(height[lf],height[lr]);
10            int area=w*ht;
11            maxarea=max(maxarea,area);
12            (height[lf]<height[lr])?lf++:lr--;
13        }return maxarea;
14
15        
16    }
17};