class Solution {
    public:
        int totalNQueens(int n) {
            int count = 0;
            vector<int> row(n, 0);
            backtrack(row, count, 0);
            return count;
        }
        
        void backtrack(vector<int>& row, int& count, int r) {
            int n = row.size();
            if (r == n) {
                count++;
                return;
            }
            
            for (int c = 0; c < n; c++) {
                if (isValid(row, r, c)) {
                    row[r] = c;
                    backtrack(row, count, r + 1);
                    row[r] = 0;
                }
            }
        }
        
        bool isValid(vector<int>& row, int r, int c) {
            for (int i = 0; i < r; i++) {
                if (row[i] == c || abs(r - i) == abs(c - row[i])) {
                    return false;
                }
            }
            return true;
        }
    };