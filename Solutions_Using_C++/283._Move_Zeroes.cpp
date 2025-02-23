class Solution {
    public:
        void moveZeroes(vector<int>& nums) {
            int n=nums.size();
            int l=0;
            for(int i=0;i<n;i++){
                if(nums[i]==0){ 
                l=max(i,l);
                while(l<n&&nums[l]==0)l++;
                if(l==n) return;
                swap (nums[i],nums[l]);
            }
            }
            return;
        }
    };