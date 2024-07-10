class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int min_len = min(word1.size(), word2.size());
        string str = "";
        // cout << min_len << endl;

        for(int i=0; i<min_len; i++){
            str = str + word1[i] + word2[i];
        }

        str = str + (word1.size() > word2.size() ? word1.substr(min_len) : word2.substr(min_len));
        // cout << str;

        return str;

    }
};