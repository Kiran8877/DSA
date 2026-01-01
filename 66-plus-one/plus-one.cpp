class Solution {
public:
    void plus(vector<int>& digits) {
       
        if (digits.empty()) {
            digits.push_back(1);
            return;
        }

        int last = digits.back();

        if (last <= 8) {
            digits.back() = last + 1;
            return;
        } else {
            digits.back() = 0;
            digits.pop_back();    
            plus(digits);          
            digits.push_back(0);   
        }
    }

    vector<int> plusOne(vector<int>& digits) {
        plus(digits);
        return digits;
    }
};
