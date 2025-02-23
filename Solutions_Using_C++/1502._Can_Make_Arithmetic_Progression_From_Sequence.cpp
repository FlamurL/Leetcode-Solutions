class Solution {
    public:
        bool canMakeArithmeticProgression(vector<int>& arr) {
            sort(arr.begin(),arr.end());
            int k=arr[0]-arr[1];
            bool is=true;
            for(int i=0;i<arr.size()-1;i++){
                if(k!=arr[i]-arr[i+1]){
                return false;
                
                }
            }
            return true;
        }
    };