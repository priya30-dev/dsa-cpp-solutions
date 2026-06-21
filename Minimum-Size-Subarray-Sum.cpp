1class Solution {
2public:
3    int minSubArrayLen(int target, vector<int>& nums) {
4        int n=nums.size();
5       int low=0;
6       int high=0;
7        int result=INT_MAX;
8       int sum=0;
9        while(high<n){
10            sum=sum+nums[high];
11            while(sum>=target){
12                int length = high-low+1;
13                result=min(result,length);
14                sum=sum-nums[low];
15                low++;       
16            }
17            high++;
18        }
19        return (result==INT_MAX) ? 0:result;
20        }
21};