class Solution {
public:
void solve(vector<int>&candidates,int index,int target, 
vector<vector<int>> &ans,vector<int>&temp){
    if (target==0){
        ans.push_back(temp);
        return;
    }
    if(index==candidates.size()||target<0){
        return;
    }
    solve(candidates,index+1,target,ans,temp);
     temp.push_back(candidates[index]);
    solve(candidates, index, target - candidates[index], ans, temp);
    temp.pop_back();

}

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int>temp;
        solve(candidates,0,target,ans,temp);
        return ans;
        
    }
};