class Solution {
public:
    int count = 0;

    int Countop(int a, int b) {
        if (a == 0 || b == 0)
            return count;
        if (a >= b) {
            a = a - b;
            count++;
            return Countop(a, b);
        } else if (b > a) {
            b = b - a;
            count++;
            return Countop(a, b);
        }
        return count;
    }

    int countOperations(int num1, int num2) {
        int count = 0;

        int counter = Countop(num1,num2);
        return counter;
    }
};