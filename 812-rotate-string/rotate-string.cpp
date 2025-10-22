class Solution {
public:
    bool rotateString(string s, string goal) {
        int a=s.size()-1;
        for(int i=0;i<s.size();i++){
           // swap(s[a],s[0]);
            char f=s[0];
            s.erase(s.begin());
            s.push_back(f);
            if(s==goal){
                return true;
            }
        }
        return false;
    }
};