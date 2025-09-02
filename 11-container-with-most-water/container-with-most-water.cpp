class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int maxi=0;
        int area;
        while(left<right){
            area=min(height[left],height[right])*(right-left);
            maxi=max(maxi,area);
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
           

        }
        return maxi;
        
    }
};