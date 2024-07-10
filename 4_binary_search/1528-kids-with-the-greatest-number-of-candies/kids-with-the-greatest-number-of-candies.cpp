class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<int> tmp = candies;
        sort(tmp.begin(), tmp.end());
        int max_val = tmp[candies.size() - 1];

        vector<bool> res(candies.size(), false);

        for(int i=0; i<candies.size(); i++){
            if((candies[i] + extraCandies) >= max_val){
                res[i] = true;
            }
        }

        return res;
    }
};