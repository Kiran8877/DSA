class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftsum=0;
        int rightsum=0;
        int totalsum=0;
        for(int n:nums){
            totalsum=totalsum+n;
        }
        for(int i=0;i<nums.size();i++){
            rightsum=totalsum-nums[i]-leftsum;
            if(leftsum==rightsum) return i;
            leftsum=leftsum+nums[i];

        }
        
        return -1;
    }
};