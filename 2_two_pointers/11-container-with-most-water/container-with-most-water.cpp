class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0, r = height.size()-1; //left and right pointers

        int max_val = 0; //stores max area

        while(l < r){
            max_val = max(max_val, min(height[l], height[r]) * (r - l)) ;

            if(height[l] < height[r]){
                l++;
            }
            else if(height [l] > height[r]){
                r--;
            }
            else{
                l++;
                r--;
            }
        }

        return max_val;
    }
};

/*//brute force - !! TIME LIMIT EXCEEDED !!
        int max_val = 0; //variable to store maximum area
        int curr_val = 0; //variable to store current area

        int n = height.size();

        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){

                if(height[i] >= height[j]){
                    curr_val = height[j] * (j - i); //take smaller height
                }

                else if(height[i] < height[j]){
                    curr_val = height[i] * (j - i); //take smaller height
                }

                max_val = max(max_val, curr_val); //update max_val
            }
        }

        return max_val; */