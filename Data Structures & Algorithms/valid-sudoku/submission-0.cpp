class Solution {
   public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int f = 0;
        for (int i = 0; i < 9; i++) {
            vector<int> v;
            for (int j = 0; j < 9; j++) {
                if (board[i][j] != '.') v.push_back(board[i][j] - '0');
            }
            sort(v.begin(), v.end());
            if (unique(v.begin(), v.end()) != v.end()) {
                f = 1;
            }
            if (f == 1) return false;
        }

        for (int i = 0; i < 9; i++) {
            vector<int> v;
            for (int j = 0; j < 9; j++) {
                if (board[j][i] != '.') v.push_back(board[j][i] - '0');
            }
            sort(v.begin(), v.end());
            if (unique(v.begin(), v.end()) != v.end()) {
                f = 1;
            }
            if (f == 1) return false;
        }

        // ৩x৩ বক্স চেক করার লুপ
        for (int rowStr = 0; rowStr < 9; rowStr += 3) {
            for (int colStr = 0; colStr < 9; colStr += 3) {
                vector<int> v;

                // একটা নির্দিষ্ট ৩x৩ বক্সের ভেতর ঘোরা
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        char cell = board[rowStr + i][colStr + j];
                        if (cell != '.') {
                            v.push_back(cell - '0');
                        }
                    }
                }

                sort(v.begin(), v.end());
                if (unique(v.begin(), v.end()) != v.end()) {
                    return false;  // বক্সে ডুপ্লিকেট পাওয়া গেছে
                }
            }
        }

        return true;
    }
};
