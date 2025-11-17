class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int z = -1;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                if (z != -1 && i - z - 1 < k) return false;
                z = i;
            }
        }
        return true;
    }
};
