class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            int a1,a2;
            for(int i=0;i<nums.size()-1;i++){
                for(int j=i+1;j<nums.size();j++){ 
                if(nums[i]+nums[j]==target){
                    a1=i;
                    a2=j;
                }
                }
            }
            return { a1, a2};
        }
    };