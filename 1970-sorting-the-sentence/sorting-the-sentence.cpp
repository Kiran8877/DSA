class Solution {
public:
    string sortSentence(string s) {
        vector<string> arr(10);
        stringstream ss(s);
        string word;
        int j=1;
        string fin;
        int count=0;
        while(ss>>word){
            char a=word.back();
            int idx=a-'0';
            word.pop_back();
            arr[idx]=word;
            count++;
        }
        while(j<=count){
            fin+=arr[j];
            if(j!=count) fin+=" ";
            j++;
        }
        return fin;
    }
};