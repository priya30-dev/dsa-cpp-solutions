class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n=fruits.size();
        int low=0;
        int high=0;
        int result=0;
        int k=2;
        unordered_map<int, int> f;
    for(int high=0;high<n;high++){
        f[fruits[high]]++;
        while(f.size()>k){
        f[fruits[low]]--;
        if(f[fruits[low]]==0){
        f.erase(fruits[low]);
        }
        low++;
    }
      
       int length=high-low+1;
       result =max(length,result);
    }
    return result;
        
    }
};