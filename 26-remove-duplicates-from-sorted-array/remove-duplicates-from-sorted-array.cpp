class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> final;

        // Collect unique elements
        for (int i = 0; i < nums.size(); i++) {
            if (final.empty() || final.back() != nums[i]) {
                final.push_back(nums[i]);
            }
        }

        // Copy back to nums
        for (int i = 0; i < final.size(); i++) {
            nums[i] = final[i];
        }

        // Optional: print the first k elements
        cout << "Unique elements: ";
        for (int i = 0; i < final.size(); i++) {
            cout << nums[i] << " ";
        }
        cout << endl;

        return final.size(); // k
    }
};
