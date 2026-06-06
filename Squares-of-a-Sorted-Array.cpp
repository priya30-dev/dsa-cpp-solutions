1class Solution {
2public:
3    vector<int> sortedSquares(vector<int>& nums) {
4        int size=nums.size();
5        vector<int>neg;
6        vector<int>pos;
7        for(int i=0;i<size;i++){
8            if(nums[i]<0)
9            neg.push_back(nums[i]);
10            else
11            pos.push_back(nums[i]);
12        }
13        if(neg.size()==0)
14        {
15            for(int i=0;i<pos.size();i++)
16            pos[i]=pos[i]*pos[i];
17            return pos;
18        }
19        if(pos.size()==0)
20        {
21             for(int i=0;i<neg.size();i++)
22            neg[i]=neg[i]*neg[i];
23            reverse(neg.begin(),neg.end());
24            return neg;
25        }
26        int i=0,j=0;
27        int id=0;
28        int n=neg.size();
29        int m=pos.size();
30        vector<int> res(n+m);
31        for(int i=0;i<n;i++)
32        neg[i]=neg[i]*neg[i];
33        reverse(neg.begin(),neg.end());
34        for(int i=0;i<m;i++)
35        pos[i]=pos[i]*pos[i];
36        while(i<n && j<m){
37            if(neg[i]<pos[j]){
38                res[id]=neg[i];
39                id++;
40                i++;
41            }
42            else{
43                res[id]=pos[j];
44                id++;
45                j++;
46                 }
47        }
48        while(i<n)
49        {
50            res[id]=neg[i];
51            id++;
52            i++;
53        }
54        while(j<m)
55        {
56              res[id]=pos[j];
57            id++;
58            j++;
59        }
60        return res;
61
62        }
63};