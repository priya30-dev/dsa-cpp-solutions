class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    vector<int> res(n+m);
        int i=0,j=0;
        int id=0;
        while(j<n && i<m){
            if(nums1[i]<nums2[j]){
                res[id]=nums1[i];
                id++;
                i++;
            }
            else{
                res[id]=nums2[j];
                id++;
                j++;
                 }
        }
                 while(i<m){
                    res[id]=nums1[i];
                    id++;
                    i++;

                 }
                 while(j<n){
                    res[id]=nums2[j];
                    id++;
                    j++;

                 }
                   for(int k = 0; k < m + n; k++) {
            nums1[k] = res[k];
                   }
            
    }
};