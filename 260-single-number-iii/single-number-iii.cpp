class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int, int> mp;
        vector<int> arr;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }
        for (auto& p : mp) {
            if (p.second == 1) {
                arr.push_back(p.first);
            }
        }
        return arr;
    }
};