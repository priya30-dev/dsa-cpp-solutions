1class Solution {
2public:
3    vector<int> majorityElement(vector<int>& nums) {
4        int count1=0;
5         int count2=0;
6        int n=nums.size();
7        int ele1=0;
8         int ele2=0;
9
10
11        for(int i=0;i<n;i++){
12            if(count1==0 && nums[i]!=ele2){
13                count1=1;
14                ele1=nums[i];
15            }
16             else if(count2 == 0 && nums[i]!= ele1) {
17                 count2 = 1;
18                ele2 = nums[i];
19               
20               
21             }
22                else if(nums[i]==ele1){
23                    count1++;
24                     }
25                      else if(nums[i]==ele2){
26                    count2++;
27                     }
28                     else{
29                        count1--;
30                        count2--;
31                     }
32            }
33            count1=0;
34            count2=0;
35            for(int i=0;i<n;i++){
36                if(nums[i]==ele1){
37                    count1++;
38                }
39                 else if(nums[i]==ele2){
40                    count2++;
41                }
42            }
43            vector<int>ans;
44             if(count1 > nums.size()/3){
45            ans.push_back(ele1);
46             }
47        if(count2 > nums.size()/3){
48            ans.push_back(ele2);
49        }
50            return ans;
51        
52    }
53};