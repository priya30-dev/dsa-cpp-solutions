class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>prefixCount;
        prefixCount[0]=1;
        int prefixSum=0, count=0;
        for(int i=0; i<nums.size(); i++){
            prefixSum+=nums[i];
             int remove = prefixSum - k;
            count+= prefixCount[remove];
            prefixCount[prefixSum]++;
        }

        return count;
    }
};