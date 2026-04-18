// Last updated: 4/18/2026, 9:55:10 PM
1class Solution {
2public:
3    int mirrorDistance(int n) {
4      int temp=0;
5      int result=0;
6      int orignal =n;
7      while (n>0){
8        temp=n%10;
9        n=n/10;
10        result =result*10 + temp;
11        
12
13
14
15      }
16       int result1=abs(orignal-result);
17     return result1;    }
18};