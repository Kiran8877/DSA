class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int count = 0;
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }
        if (k == 0) {
            for (auto m : mp) {
                if (m.second >= 2) {
                    count++;
                }
            }
        } else if (k > 0) {
            for (auto m : mp) {
                int x = m.first;
                if (mp.count(x + k)) {
                    count++;
                }
            }
        }
        return count;
    }

    
};