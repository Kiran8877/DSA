class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int ind=-1;
        int max=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max){
                max=nums[i];
                ind=i;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=max && nums[i]*2>max){
                return -1;
            }
        }
        return ind;
    }
};