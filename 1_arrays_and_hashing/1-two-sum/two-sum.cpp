class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //time comp - O(n), space comp - O(n)
        unordered_map <int,int> umap; //store array elements as keys, indices as values

        for(int i=0; i<nums.size(); i++){
            if(umap.find(target - nums[i]) == umap.end()){ //if complement doesn't exist in umap
                umap[nums[i]] = i;
            }
            else{ //if complement exists
                return {umap[target-nums[i]], i};
            }
        }

        return {-1, -1}; //if no pair exists
    }
};

/*// My solution - O(n^2)
        for(int i=0; i<nums.size()-1; i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    return {i, j};
                }
            }
        }
        return {};
*/