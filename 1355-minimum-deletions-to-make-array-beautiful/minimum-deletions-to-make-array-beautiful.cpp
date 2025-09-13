class Solution {
public:
    int minDeletion(vector<int>& nums) {
      
        int res = 0, n = nums.size();
        for(int i = 1; i < n; ++i){
            if(nums[i - 1] == nums[i]) ++res;
            else ++i;
        }
        return res + ((n - res) & 1);
    }
};