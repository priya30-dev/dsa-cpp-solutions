1class Solution {
2public:
3    int majorityElement(vector<int>& nums) {
4        int n= nums.size();
5        int cnt=0;
6        int ele;
7        for(int i=0;i<n;i++){
8            if(cnt==0){
9                cnt=1;
10                ele=nums[i];
11            }
12            else if (nums[i]==ele){
13                cnt++;
14            }
15            else{
16                cnt--;
17            }
18
19        }
20        int cnt1=0;
21        for(int i=0;i<n;i++){
22            if(nums[i]==ele){
23                cnt1++;
24            }
25        }
26        if(cnt1>(n/2)){
27            return ele;
28        }
29    
30        return -1;
31    }
32};