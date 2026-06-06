1class Solution {
2public:
3    int threeSumClosest(vector<int>& nums, int target) {
4        int n= nums.size();
5        sort(nums.begin(),nums.end());
6         int min_diff = INT_MAX;
7             int ans=0;
8        for(int i=0;i<n-2;i++){
9            int left=i+1;
10            int right=n-1;
11            while(left<right){
12                int sum=nums[i]+nums[left]+nums[right];
13                 int diff = abs(sum - target);
14                 if (diff < min_diff) {
15                    min_diff = diff;
16                    ans = sum;
17                 }
18                if(sum==target){
19                    left++;
20                    right--;
21                    while(left<right && nums[left]==nums[left-1])
22                    left++;
23                    while(left<right && nums[right]==nums[right+1])
24                    right--;
25                    }
26                    else if(sum<target){
27                        left++;
28                    }
29                    else{
30                        right--;
31                    }
32            }
33        }
34           return ans;
35        
36    }
37};