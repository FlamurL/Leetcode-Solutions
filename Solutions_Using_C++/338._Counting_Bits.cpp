class Solution {
    public:
        vector<int> countBits(int num) {
            vector<int> ans;
            for(int i=0;i<=num;i++){
                int count = 0;
                int j = i;
                while(j!=0){
                    count+=j%2;
                    j/=2;
                }
                ans.push_back(count);
            }
            return ans;
        }
    };