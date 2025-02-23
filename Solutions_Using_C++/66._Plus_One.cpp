class Solution {
    public:
        vector<int> plusOne(vector<int>& digits) {
            if(digits[digits.size()-1]<9){
               digits[digits.size()-1]= digits[digits.size()-1]+1;
               return digits;
            }
            else{ 
                bool is=true;
            for(int i=digits.size()-1;i>=0;i--){
                if(digits[i]==9){
                    digits[i]=0;
                    
                }
                else{ 
                    digits[i]=digits[i]+1;
                    is=false;
                break;
                }
            }
            if(is==false)
            return digits;
            else{
                vector<int>v;
                v.push_back(1);
                for(int i=0;i<digits.size();i++){
                    int k=digits[i];
                    v.push_back(k);
                }
                return v;
            }
            
    
            }
        }
    };