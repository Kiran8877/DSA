class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";
        int counter=0;
        for(char c:s){
            if(c=='('){
                if(counter>0){
                ans.push_back(c);
                
            }
            counter++;
             }
            else{
                counter--;
                if(counter>0){
                    ans.push_back(c);
                }

            }
        }
        return ans;
    }
};