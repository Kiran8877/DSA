class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> map1;
        map<char,int> map2;
        for(char ch : s){
            map1[ch]++;
        }
        for(char ch:t){
            map2[ch]++;
        }
        if(map1==map2) return true;
        return false;
    }
};