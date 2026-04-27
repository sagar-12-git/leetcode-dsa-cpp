// Last updated: 4/27/2026, 11:21:05 PM
1class Solution {
2public:
3    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
4        int i = m - 1;        // last valid element in nums1
5        int j = n - 1;        // last element in nums2
6        int k = m + n - 1;    // last position in nums1
7
8        while (i >= 0 && j >= 0) {
9            if (nums1[i] > nums2[j]) {
10                nums1[k] = nums1[i];
11                i--;
12            } else {
13                nums1[k] = nums2[j];
14                j--;
15            }
16            k--;
17        }
18
19        // If nums2 still has elements left
20        while (j >= 0) {
21            nums1[k] = nums2[j];
22            j--;
23            k--;
24        }
25    }
26};