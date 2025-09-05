class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        long long sum = 0;  
        int mini = INT_MAX;

        for (int j = 0; j < n; j++) {
            sum += nums[j];

            while (sum >= target && i <= j) {  
                mini = min(mini, j - i + 1);
                sum -= nums[i];
                i++;
            }
        }

        return (mini == INT_MAX) ? 0 : mini;
    }
};
