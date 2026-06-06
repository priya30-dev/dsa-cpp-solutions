1class Solution {
2public:
3    vector<vector<int>> threeSum(vector<int>& nums) {
4        vector<vector<int>> result;
5        int n=nums.size();
6        sort(nums.begin(), nums.end());
7        for(int i=0;i<n-2;i++){
8            if(i>0 && nums[i]==nums[i-1])
9            continue;
10            int left=i+1;
11            int right=n-1;
12            while(left<right){
13                int sum=nums[i]+nums[left]+nums[right];
14                if(sum==0){
15                result.push_back({nums[i],nums[left],nums[right]});
16                left++;
17                right--;
18                while(left<right && nums[left]==nums[left-1])
19                left++;
20                 while(left<right && nums[right]==nums[right+1])
21                right--;
22                 }
23                else if(sum<0){
24                    left++;
25                }
26                    else{
27                        right--;
28                    }
29            }
30        }
31                    return result;
32        
33    }
34};