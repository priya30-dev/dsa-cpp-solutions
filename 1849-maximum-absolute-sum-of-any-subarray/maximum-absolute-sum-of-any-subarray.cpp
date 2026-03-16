class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxEnd=0;
        int minEnd=0;
        int maxSum=0;
        int minSum=0;
        for(int i=0;i< nums.size(); i++)
        {
            maxEnd=max(nums[i],maxEnd+nums[i]);
            minEnd=min(nums[i],minEnd+nums[i]);
            maxSum = max(maxSum, maxEnd);
            minSum = min(minSum, minEnd);
        }

        return max(maxSum, abs(minSum));
            

        }

        
    
};