class Solution {
public:
    void reverseString(vector<char>& s) {
        int x=s.size();
        int k=0;
        int e=x-1;
        while(k<e){
            swap(s[k],s[e]);
            k++;
            e--;
        }
    }
    
};
