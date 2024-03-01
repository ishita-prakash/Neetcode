class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res; // resulting 2d vector

        int n = nums.size();

        sort(nums.begin(), nums.end()); //sorting nums array

        set<vector<int>> st; //set to store unique triplets

        int j = 0, k = 0;

        for(int i=0; i<n; i++){
            j = i + 1;
            k = n - 1;

            while(j < k){
                if(nums[i] + nums[j] + nums[k] == 0){
                    st.insert({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                }

                else if(nums[i] + nums[j] + nums[k] < 0){
                    j++;
                }

                else{
                    k--;
                }
            }
        }

        for(auto x: st){
            res.push_back(x);
        }

        return res;
    }
};