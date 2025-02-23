class Solution {
    public:
        bool isPalindrome(int x) {
             int remainder;
             int g=x;
            string s="";
         while(x != 0) {
        remainder = x % 10;
        s+=int(remainder)-48;
        x = (x-remainder)/10;
      }
      if( g<0){
          return false;
      }
      if(s.size()==1){
          return true;
      }
      bool is=true;
    for(int i=0;i<s.size()/2;i++){
        if(s[i]!=s[s.size()-1-i])
        is=false;
    }
    if(is==true){
        return true;
    }
    else
    return false;
        }
    };