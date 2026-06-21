class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int low=0;
        int high=0;
         int result=0;
        unordered_map<char, int> f;
        for(int high=0;high<n;high++){
            f[s[high]]++;
            int k=high-low+1;
            while(f.size()<k){
                f[s[low]]--;
                if(f[s[low]]==0){
                    f.erase(s[low]);
                }
                low++;
            k=high-low+1;
            }
            int length= high-low+1;
            result=max(result,length);
        }
        return result;
        
    }
};