class Solution {
    public:
 
        string shortestBeautifulSubstring(string str, int k) {
            int startIndex = 0, endIndex = 0, oneCount = 0;
            int strSize = str.size();
            string shortestSubstring = "";
    
            while (endIndex < strSize) {
            
                oneCount += (str[endIndex] == '1');
    
     
                while (oneCount > k || (startIndex < endIndex && str[startIndex] == '0')) {
                    oneCount -= (str[startIndex++] == '1');
                }
    
              
                ++endIndex;
    
                
                string currentSubstring = str.substr(startIndex, endIndex - startIndex);
    
                if (oneCount == k && 
                    (shortestSubstring.empty() || endIndex - startIndex < shortestSubstring.size() || 
                     (endIndex - startIndex == shortestSubstring.size() && currentSubstring < shortestSubstring))) {
                    shortestSubstring = currentSubstring;
                }
            }
          
            
            return shortestSubstring;
        }
    };