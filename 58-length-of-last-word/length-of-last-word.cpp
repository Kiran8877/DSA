class Solution {
public:
    int lengthOfLastWord(string s) {
        vector<string> str;
        string temp;
        string temp1;
        stringstream ss(s);
        while(ss>>temp){
            str.push_back(temp);
        }
        temp1=str[str.size()-1];
        return temp1.size();
        
    }
};