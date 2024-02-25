class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //my solution
        int n = nums.size();

        //edge cases
        if(n == 0)
            return 0;
        else if(n == 1)
            return 1;
        
        set<int> st;

        st.insert(nums.begin(), nums.end());

        vector<int> arr; //sorted unique array

        for(auto x: st){
            arr.push_back(x);
        }

        int curr_count = 1;
        int count_max = 1;

        n = arr.size();
        for(int i=1; i<n; i++){
            if(arr[i] - arr[i-1] == 1){
                curr_count++;
                count_max = max(count_max, curr_count);
            }

            else{
                curr_count = 1;
            }
        }

        return count_max;
    }
};