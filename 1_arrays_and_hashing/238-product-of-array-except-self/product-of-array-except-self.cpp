class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> answer(n, 1); // n elements in answer vector, ach initialised with 1

        //edge cases
        if(n == 0 || n == 1)
            return answer;
            
        int leftProduct = 1;

        for(int i=0; i<n; i++){
            answer[i] *= leftProduct;
            leftProduct *= nums[i];
        }

        int rightProduct = 1;

        for(int i=n-1; i>=0; i--){
            answer[i] *= rightProduct;
            rightProduct *= nums[i];
        }

        return answer;
    }
};

/* //brute force - O(n^2)
        int n = nums.size();
        vector<int> answer;

        //edge case
        if(n == 0 || n == 1)
            return answer;

        for(int i=0; i<n; i++){
            int temp = 1;
            for(int j=0; j<n; j++){
                if(i != j){
                    temp = temp * nums[j];
                }
            }
            answer.push_back(temp);
        }

        return answer; */