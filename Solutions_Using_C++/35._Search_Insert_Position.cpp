class Solution {
    public:
        int searchInsert(vector<int>& nums, int target) {
            int ans=0;
            int q=0;
            for(int i=0;i<nums.size();i++){
                if(nums[i]==target){
                    ans=i;
                    q++;
                    break;
                }
                else if(nums[i]>target){
                    q++;
                    ans=i;
                    break;
                }
        
                
            }
            
            if(ans==0&&q==0)
            ans=nums.size();
            return ans;
        }
    };