class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res; // result 2D vector of strings

        //checking for edge conditions
        if(strs.empty()){
            return res;
        }
        if(strs.size() == 1){
            res.push_back({strs[0]});
            return res;
        }

        map<string, vector<string>> mp; //ordered map -> key is sorted word, value is anagrams of the key
        string word;

        for(auto x: strs){ //iterate through strs vector
            word = x; 
            sort(word.begin(), word.end()); //sort each word of strs

            mp[word].push_back(x); //sorted word as key and in the corresponding vector value, push back the current strs[i]
        }

        

        for(auto x:mp){ //iterate through map
            res.push_back(x.second); // push back each value from map into res vector
        }

        return res;
    }    
};