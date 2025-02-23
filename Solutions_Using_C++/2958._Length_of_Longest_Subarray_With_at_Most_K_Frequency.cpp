#include <vector>
#include <unordered_map>
#include <algorithm>

class Solution {
public:

    int maxSubarrayLength(vector<int>& nums, int k) {
        
        unordered_map<int, int> countMap;
       
        int maxLength = 0;

        for (int left = 0, right = 0; right < nums.size(); ++right) {
            
            ++countMap[nums[right]];
            
            while (countMap[nums[right]] > k) {
                --countMap[nums[left]];
                ++left;  
            }
         
            maxLength = max(maxLength, right - left + 1);
        }
 
        return maxLength;
    }
};