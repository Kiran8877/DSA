class Solution {
public:
    int countHomogenous(string s) {
        long long int count=1;
        long long int sum=0;
        for(int i=1;i<s.size();i++){
            if(s[i]==s[i-1]){
                count++;
            }
            else{
                sum=sum+(count*(count+1))/2;
                count=1;
            }
        }
        sum=sum+(count*(count+1))/2;
        sum=sum%1000000007;
        return sum;
    }
};