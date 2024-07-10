class Solution {
public:
    int minOperations(vector<string>& logs) {
        int cnt = 0;

        for(string str: logs){
            if(isalnum(str[0])) cnt++;

            else if(str.size() >= 2 && str[0] == '.' && str[1] == '.'){
                if(cnt == 0);
                else cnt--;
            }
        }
        return cnt;
    }
};