class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string> s;

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                char num = board[i][j];

                if (num != '.') {
                    string rowKey = "row " + to_string(i) + " has " + num;
                    string colKey = "col " + to_string(j) + " has " + num;
                    string boxKey = "box " + to_string(i / 3) + "-" + to_string(j / 3) + " has " + num;

                    if (s.count(rowKey) || s.count(colKey) || s.count(boxKey)) {
                        return false; 
                    }

                    s.insert(rowKey);
                    s.insert(colKey);
                    s.insert(boxKey);
                }
            }
        }

        return true;
    }
};