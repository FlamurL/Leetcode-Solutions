class Solution {
    public:
        int lengthOfLastWord(string s) {
         int ans1=0;
         int ans=0;
          for(int i=0;i<s.size();i++){
              if(s[i]==' '){
    
                  ans1=0;
              }
              else{ 
                  if(ans1==0){
                      ans=0;
                  }
                  ans++;
              ans1++;
          }
         
        }
         return ans;
        }
    };