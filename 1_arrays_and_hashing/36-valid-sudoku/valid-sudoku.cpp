class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
/*
        0 1 2 | 3 4 5 | 6 7 8 
    0
    1 
    2
    --------------------------
    3
    4
    5
    --------------------------
    6
    7
    8
*/
        unordered_set<string> st;

        char curr;

        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                curr = board[i][j];
                
                //if '.' encountered then continue to the next iteration of inner loop
                if(curr == '.'){
                    continue;
                }

                //checking row for duplicate and inserting if no duplicate
                if(!st.insert("r"+to_string(i)+curr).second){//insert returns a pair of an iterator and a boolean value if insertion happened or not
                    return false;
                }

                //checking column for duplicate and inserting if no duplicate
                if(!st.insert("c"+to_string(j)+curr).second){
                    return false;
                }

                //checking box for duplicate and inserting if no duplicate
                if(!st.insert("b"+to_string(((i/3)*3)+j/3)+curr).second){
                    return false;
                }
            }
        }
        return true;
    }
};