class Solution {
public:
    int maximum69Number(int num) {
        vector<int> digits;

        while (num > 0) {
            digits.push_back(num % 10);
            num /= 10;
        }
        reverse(digits.begin(), digits.end());
        for (int i = 0; i < digits.size(); i++) {
            if (digits[i] == 6) {
                digits[i] = 9;
                break;
            }
        }
        int sum = 0;
        for (int d : digits) {
            sum = sum * 10 + d;
        }
        return sum;
    }
};