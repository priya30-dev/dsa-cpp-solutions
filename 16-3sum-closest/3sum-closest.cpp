class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n= nums.size();
        sort(nums.begin(),nums.end());
         int min_diff = INT_MAX;
             int ans=0;
        for(int i=0;i<n-2;i++){
            int left=i+1;
            int right=n-1;
            while(left<right){
                int sum=nums[i]+nums[left]+nums[right];
                 int diff = abs(sum - target);
                 if (diff < min_diff) {
                    min_diff = diff;
                    ans = sum;
                 }
                if(sum==target){
                    left++;
                    right--;
                    while(left<right && nums[left]==nums[left-1])
                    left++;
                    while(left<right && nums[right]==nums[right+1])
                    right--;
                    }
                    else if(sum<target){
                        left++;
                    }
                    else{
                        right--;
                    }
            }
        }
           return ans;
        
    }
};