class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        int ans1 = 0, ans2 = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (colors[i] != colors[0]) {
                ans1 = i;
                break;
            }
        }
        for (int i = 0; i < n; i++) {
            if (colors[i] != colors[n - 1]) {
                ans2 = (n - 1) - i;
                break;
            }
        }
        return max(ans1, ans2);
    }
};
