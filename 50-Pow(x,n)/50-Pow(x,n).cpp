// Last updated: 4/23/2026, 10:55:23 PM
1class Solution {
2public:
3    double myPow(double x, int n) {
4        double ans=1;
5        long num = n;
6        if(x==0) return 0.0;
7        if (x==1) return 1.0;
8        if(x==-1&& num%2==0) return 1.0;
9        if(x==-1&& num%2==1) return -1.0;
10        if(num==0){
11            return 1.0;
12        }
13        if(num<0){
14            x=1/x;
15            num=-num;
16        }
17        while(num>0){
18            if(num %2== 1){
19                ans=ans*x;
20            }
21            x=x*x;
22            num=num/2;
23
24    }return ans;
25        
26    }
27};