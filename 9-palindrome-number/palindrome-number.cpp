class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        int num=x;
        long long n=0;
        while(x>0){
            n=n*10+x%10;
            x=x/10;
        }
        return num==n;
        
    }
};