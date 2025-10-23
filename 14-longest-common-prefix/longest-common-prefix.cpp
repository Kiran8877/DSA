class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string first=strs[0];
        int i=0;
        string last=strs[strs.size()-1];
        int j=0;
        string ans="";
        while(i<first.size() && j<last.size()){
            if(first[i]==last[j]){
                ans.push_back(first[i]);
                i++;
                j++;
            }
            else{
                break;
            }
        }
        return ans;
    }
};