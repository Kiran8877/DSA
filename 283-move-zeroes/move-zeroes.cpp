class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int z = nums.size();   // effective size that shrinks when zeros are fixed

        for(int i = 0; i < z; i++){
            if(nums[i] == 0){
                // shift elements left
                for(int j = i; j < z-1; j++){
                    nums[j] = nums[j+1];
                }
                nums[z-1] = 0;   // put 0 at end
                i--;             // recheck current index
                z--;             // shrink effective size
            }
        }

        // debug print
        for(int x: nums){
            cout << x << " ";
        }
        cout << endl;
    }
};
