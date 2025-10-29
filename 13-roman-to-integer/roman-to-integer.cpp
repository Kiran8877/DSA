class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> roman;
        roman['I']=1;
        roman['V']=5;
        roman['X']=10;
        roman['L']=50;
        roman['C']=100;
        roman['D']=500;
        roman['M']=1000;
        int ans=0;
        int p=0;
        int value=0;
        for(int i=s.size()-1;i>=0;i--){
            value=roman[s[i]];
            if(value<p){
                ans-=value;
            }
            else{
                ans+=value;
            }
            p=value;
        }
        return ans;
    }
};