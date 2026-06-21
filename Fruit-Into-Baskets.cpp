1class Solution {
2public:
3    int totalFruit(vector<int>& fruits) {
4        int n=fruits.size();
5        int low=0;
6        int high=0;
7        int result=0;
8        int k=2;
9        unordered_map<int, int> f;
10    for(int high=0;high<n;high++){
11        f[fruits[high]]++;
12        while(f.size()>k){
13        f[fruits[low]]--;
14        if(f[fruits[low]]==0){
15        f.erase(fruits[low]);
16        }
17        low++;
18    }
19      
20       int length=high-low+1;
21       result =max(length,result);
22    }
23    return result;
24        
25    }
26};