class Solution {
public:
    string sortSentence(string s) {
        vector<string> arr(10);
        int count=0;
        int index=0;
        string temp;
        for(int i=0;i<s.size();i++){
            if(s[i]== ' '){
                int pos =temp[temp.size()-1]-'0';
                temp.pop_back();
                arr[pos]=temp;
                temp.clear();
                count++;
            }
            else {
                temp+=s[i];
            }

            }
              int pos =temp[temp.size()-1]-'0';
                temp.pop_back();
                arr[pos]=temp;
                temp.clear();
                count++;
                string ans="";
                for(int i=1;i<=count;i++){
                    if(arr[i]!=""){
                        if(ans!="")
                        ans+=" ";
                        ans+=arr[i];
                    }
                }
                return ans;   
        }    
    
};