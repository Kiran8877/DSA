
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> arr;

        // Copy only valid elements from nums1
        for (int i = 0; i < m; i++) {
            arr.push_back(nums1[i]);
        }

        // Copy elements from nums2
        for (int i = 0; i < n; i++) {
            arr.push_back(nums2[i]);
        }

        // Sort the merged array
        sort(arr.begin(), arr.end());

        // Copy back into nums1
        for (int i = 0; i < m + n; i++) {
            nums1[i] = arr[i];
        }
         for (int i = 0; i < m + n; i++) {
            cout<<nums1[i];
         }
    }
};
