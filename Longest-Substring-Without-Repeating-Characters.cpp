1class Solution {
2public:
3    int lengthOfLongestSubstring(string s) {
4        int n=s.length();
5        int low=0;
6        int high=0;
7         int result=0;
8        unordered_map<char, int> f;
9        for(int high=0;high<n;high++){
10            f[s[high]]++;
11            int k=high-low+1;
12            while(f.size()<k){
13                f[s[low]]--;
14                if(f[s[low]]==0){
15                    f.erase(s[low]);
16                }
17                low++;
18            k=high-low+1;
19            }
20            int length= high-low+1;
21            result=max(result,length);
22        }
23        return result;
24        
25    }
26};