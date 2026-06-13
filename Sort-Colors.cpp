1class Solution {
2public:
3    void sortColors(vector<int>& nums) {
4        int n=nums.size();
5        int low=0;
6        int high=n-1;
7        int mid=0;
8        for(int i=0;i<n;i++){
9            if(nums[mid]==0){
10                swap(nums[mid],nums[low]);
11                mid++;
12                low++;
13            }
14                else if(nums[mid]==1){
15                    mid++;
16                }
17                    else{
18                         nums[mid]==2;
19                        swap(nums[mid],nums[high]);
20                        high--;
21                    }
22
23                        }
24                        
25
26        }
27    
28};