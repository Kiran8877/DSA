class Solution {
public:
    string reverseWords(string s) {
        string temp;
        string temp1;
        vector<string> str;
        stringstream ss(s);
        while(ss>>temp){
            str.push_back(temp);

        }
        reverse(str.begin(),str.end());
        for(int i=0;i<str.size();i++){
           temp1+=str[i];
           if(i!=str.size()-1){
                temp1+=" ";
           }
           
        }
        return temp1;
    }
};