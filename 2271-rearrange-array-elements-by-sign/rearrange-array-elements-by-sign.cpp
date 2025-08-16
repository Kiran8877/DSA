class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
         vector<int> pos, neg;
    
    // Separate positives and negatives
    for (int num : nums) {
        if (num > 0)
            pos.push_back(num);
        else
            neg.push_back(num);
    }
    
    vector<int> result;
    result.reserve(nums.size());
    
    // Alternate positive and negative
    for (int i = 0; i < pos.size(); i++) {
        result.push_back(pos[i]);
        result.push_back(neg[i]);
    }
    
    return result;
    }
};