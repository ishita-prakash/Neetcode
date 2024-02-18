class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> umap; //key is char, value is int(represents count, initially 0)

        for(auto i: s){
            umap[i]++; //increase count of char (s)
        }

        for(auto i: t){
            umap[i]--; //decrease count of char (t)
        }

        for(auto i: umap){
            if(i.second != 0){ //if count of each char in umap = 0 -> anagram
                return false;
            }
        }

        return true;
    }
};