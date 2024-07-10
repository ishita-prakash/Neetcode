class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max_val = *max_element(candies.begin(), candies.end());

        vector<bool> res(candies.size(), false);

        for(int i=0; i<candies.size(); i++){
            if((candies[i] + extraCandies) >= max_val){
                res[i] = true;
            }
        }

        return res;
    }
};