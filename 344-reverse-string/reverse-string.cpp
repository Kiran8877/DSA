class Solution {
public:
    void reverseString(vector<char>& s) {
         int x=s.size();
        for(int i=0;i<x/2;i++){
            swap(s[i],s[x-i-1]);
        }
    }
};
