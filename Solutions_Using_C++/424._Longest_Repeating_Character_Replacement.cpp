class Solution {
    public:
        int characterReplacement(string s, int k) {
            vector<int> charCount(26, 0); // Counter for each letter's frequency within the sliding window
            int left = 0; // Left index of the sliding window
            int right = 0; // Right index of the sliding window
            int maxCharCount = 0; // Variable to keep track of the count of the most frequent character within the window
          
            // Iterate over the characters of the string
            for (right = 0; right < s.size(); ++right) {
                charCount[s[right] - 'A']++; // Increment the count for the current character
              
                // Update the max frequency character count seen so far in the current window
                maxCharCount = max(maxCharCount, charCount[s[right] - 'A']);
              
                // Check if the current window size minus the count of the max frequency character
                // is greater than k, if so, shrink the window from the left
                if (right - left + 1 - maxCharCount > k) {
                    charCount[s[left] - 'A']--; // Decrement the count for the character at the left index as it's going out of the window
                    left++; // Shrink the window from the left
                }
            }
          
            // The length of the largest window compliant with the condition serves as the answer
            return right - left;
        }
    };