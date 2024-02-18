class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        //using ordered set
        set<int> s(nums.begin(), nums.end()); //insert elements from array into set
        if(s.size() != nums.size()) //set stores only unique elements
            return true;

        return false;
    }
};

/*
// time comp of my solution - O(n^2)
        for(int i=0; i<nums.size()-1; i++){
            for(int j=i+1; j<nums.size(); j++){

                if(nums[i] == nums[j]){
                    return true;
                }
            }
        }

        return false;
*/    