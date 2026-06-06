1class Solution {
2public:
3    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
4    vector<int> res(n+m);
5        int i=0,j=0;
6        int id=0;
7        while(j<n && i<m){
8            if(nums1[i]<nums2[j]){
9                res[id]=nums1[i];
10                id++;
11                i++;
12            }
13            else{
14                res[id]=nums2[j];
15                id++;
16                j++;
17                 }
18        }
19                 while(i<m){
20                    res[id]=nums1[i];
21                    id++;
22                    i++;
23
24                 }
25                 while(j<n){
26                    res[id]=nums2[j];
27                    id++;
28                    j++;
29
30                 }
31                   for(int k = 0; k < m + n; k++) {
32            nums1[k] = res[k];
33                   }
34            
35    }
36};