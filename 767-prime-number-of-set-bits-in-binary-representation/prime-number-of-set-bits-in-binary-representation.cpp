class Solution {
public:
    bool check(int num) {
        if ((num == 2) || (num == 3) || (num == 5) || (num == 7) ||
            (num == 11) || (num == 13) || (num == 17) || (num == 19)) {
            return true;
        }
        return false;
    }
    int countPrimeSetBits(int left, int right) {
        int set = 0;
        int prime = 0;
        for (int i = left; i <= right; i++) {
            int k=i;
            set=0;
            while (k) {
                set = set + (k & 1);
                k=k >> 1;
            }
            if (check(set)) {
                prime += 1;
            }
        }
        return prime;
    }
};