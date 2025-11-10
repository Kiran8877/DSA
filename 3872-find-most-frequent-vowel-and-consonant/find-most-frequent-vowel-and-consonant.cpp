class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char, int> vowel;
        unordered_map<char, int> art;
        int max1=0;
        int max2=0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                s[i] == 'u') {
                vowel[s[i]]++;
            } else {
                art[s[i]]++;
            }
        }
        for(auto it:vowel){
            max1=max(max1,it.second);
        }
         for(auto it:art){
            max2=max(max2,it.second);
        }
        return max1+max2;
    }
};