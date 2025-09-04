class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i=0;
        int j=0;
        double avg=0;
        double maxavg=INT_MIN;
        double sum=0;
        while(j<nums.size()){
            sum=sum+nums[j];
            avg=sum/k;
            if(j-i+1<k){
                j++;
            }
            else if(j-i+1==k){
                maxavg=max(avg,maxavg);
                sum=sum-nums[i];
                i++;
                j++;
            }
        }
        return maxavg;
    }
};