1class Solution {
2public:
3    double findMaxAverage(vector<int>& nums, int k) {
4        int n=nums.size();
5        int low=0;
6        int high=k-1;
7       int  sum=0;
8        for(int i=low;i<=high;i++){
9            sum=(sum+nums[i]);
10        }
11        int result=sum;
12            while(high<n){
13               result=max(result,sum);
14                low++;
15                high++;
16                if(high==n)
17                break;
18                sum=sum-nums[low-1]+nums[high];      
19            }
20        
21
22
23
24        return (double)result / k;
25    }
26};