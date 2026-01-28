class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        int left=0;
        int maxi=0;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
            while(mp[s[i]]>1){
                mp[s[left]]--;
                left++;
            }
            maxi=max(maxi,i-left+1);
        }
        return maxi;
    }
};