class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        map<int,int> m;
        int a=-1;
        int b=-1;
        int row=grid.size();
        int col=grid[0].size();
        int n=row*col;
        int sum=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                m[grid[i][j]]++;
                sum=sum+grid[i][j];
            }
        }

       
        for(auto p:m){
            if(p.second>1){
                a=p.first;
                break;
            }
        }
        int z=n*(n+1)/2;
        b=z-(sum-a);
        return {a,b};
    }
};