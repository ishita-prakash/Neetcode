class Solution {
public:
    //recursive approach 
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        helper(n, 0, 0, "", res);
        return res;
    }

    //helper function
    void helper(int n, int open, int close, string s, vector<string> &res) {
        if(open == n && close == n){
            res.push_back(s);
            return;
        }

        if(open < n)
            helper(n, open + 1, close, s + "(", res);

        if(close < open)
            helper(n, open, close + 1, s + ")", res);
    }
};