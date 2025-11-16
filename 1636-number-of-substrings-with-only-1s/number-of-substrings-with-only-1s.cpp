class Solution {
public:
    int numSub(string s) {
        long long count=0;
        long long sum=0;

        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                count++;
            }
            else{
                sum=sum+(count*(count+1))/2;
                count=0;
            }
        }
        sum=sum+(count*(count+1))/2;
        if(sum>1000000007) return sum=sum% 1000000007;
        return sum;
    }
};