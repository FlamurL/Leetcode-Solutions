class Solution {
    public:
        string addStrings(string num1, string num2) {
       string result;
    
        int indexOne = num1.length() - 1;
        int indexTwo = num2.length() - 1;
        int carry = 0;
    
        while (indexOne >= 0 || indexTwo >= 0 || carry) {
            int current = carry;
    
            if (indexOne >= 0) {
                current += num1[indexOne] - '0';
            }
    
            if (indexTwo >= 0) {
                current += num2[indexTwo] - '0';
            }
    
            carry = current / 10;
            current = current % 10;
    
            result = (char)(current + '0') + result;
    
            indexOne--;
            indexTwo--;
        }
    return result;
        }
    };