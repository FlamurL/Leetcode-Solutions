class Solution {
    public:
        int countNegatives(vector<vector<int>>& grid) {
           int ans=0;
          
            for(int i=0;i<grid.size();i++){
                for(int k=0;k<grid[0].size();k++){
                    if(grid[i][k]<0){ 
                    ans+=grid[0].size()-k;
                    break;
                    }
                }
            }
            return ans;
        }
    };