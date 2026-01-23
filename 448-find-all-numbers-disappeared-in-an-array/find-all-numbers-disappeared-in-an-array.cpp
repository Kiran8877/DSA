class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> final;
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
    
    for(int i=1;i<=nums.size();i++){
        if(m.find(i)==m.end()){
            final.push_back(i);
        
        }
    }
    // if(final.empty()){
    //     final.push_back(nums.size()-1+1);
    // }
    return final;
    }

};