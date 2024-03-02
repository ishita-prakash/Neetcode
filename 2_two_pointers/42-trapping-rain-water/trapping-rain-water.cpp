class Solution {
public:
    int trap(vector<int>& height) {
        //time comp = O(n), space comp = O(1)
        //edge case
        if(height.size() == 0){
            return 0;
        }

        int l = 0, r = height.size() - 1; //left and right pointers
        int l_max = height[l], r_max = height[r]; //keep track of left and right maximums
        int res = 0; //stores result

        while(l < r){
            if(l_max < r_max){
                l++;
                l_max = max(l_max, height[l]);
                res += l_max - height[l];
            }

            else{
                r--;
                r_max = max(r_max, height[r]);
                res += r_max - height[r];
            }
        }

        return res;
    }
};

//for brute force - O(n) space complexity by using additional arrays for storing max_left, max_right and min(l,r).
//min(l, r) - height[i]