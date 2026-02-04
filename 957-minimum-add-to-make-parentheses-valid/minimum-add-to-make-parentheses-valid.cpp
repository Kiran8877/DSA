class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<int> st;
        for(int i=0;i<s.size();i++){
            if(!st.empty() && s[i]==')' && st.top()=='('  ){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        int count=0;
        while(!st.empty()){
            count++;
            st.pop();
        }
        return count;
    }
};