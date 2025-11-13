class Solution {
public:
    long long maxOperations(string s) {
        long long ones = 0, ans = 0;
        int n = s.size();
        for (int i = 0; i < n; ++i) {
            if (s[i] == '1') ones++;
            else if (i + 1 == n || s[i + 1] == '1') ans += ones;
        }
        return ans;
    }
};
