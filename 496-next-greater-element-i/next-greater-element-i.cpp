class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
       vector<int> fin;
       unordered_map<int,int> next;
       stack<int> st;
       for(int i=nums2.size()-1; i>=0;i--){
          while(!st.empty() && nums2[i]>=st.top()){
            st.pop();
          }
          if(st.empty()){
            next[nums2[i]]=-1;
          }
          else{
            next[nums2[i]]=st.top();
          }
          st.push(nums2[i]);
       }
        
        for(int i = 0; i < nums1.size(); i++) {
            fin.push_back(next[nums1[i]]);
        }

        return fin;

    }
};