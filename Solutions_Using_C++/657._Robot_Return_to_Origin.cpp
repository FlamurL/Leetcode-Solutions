class Solution {
    public:
        bool judgeCircle(string moves) {
            int r=0, l=0, u=0, d=0;
            for(int i=0;i<moves.size();i++){
                if(moves[i]=='R')
                r++;
                if(moves[i]=='L')
                l++;
                if(moves[i]=='U')
                u++;
                if(moves[i]=='D')
                d++;
            }
            if(l==r&&u==d){
                return true;
            }
            else 
            return false;
        }
    };