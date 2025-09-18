class Solution {
public:
    int firstMissingPositive(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int smallest = 1;                      
        for (int x : arr) {
            if (x < smallest) continue;        
            if (x == smallest) smallest++;     
            else if (x > smallest) break;
        }
        return smallest;                      
    }
};
