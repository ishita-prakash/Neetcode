class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        // 1 pass solution - tc = O(n)+O(n), sc = O(n)
        stack<int> st;
        int max_area = 0;
        int n = heights.size();

        for(int i=0; i<=n; i++){
            while(!st.empty() && (i==n || heights[st.top()] >= heights[i])) {
                int height = heights[st.top()];
                st.pop();
                int width;
                if(st.empty()) width = i;
                else width = i - st.top() - 1;
                max_area = max(max_area, width * height);
            }
            st.push(i);
        }
        return max_area;
    }
};

/* naive - O(n^2)
do for each element
(right smaller index - left smaller index + 1) * heights[i]

//not naive - 2 pass solution - TC=O(n), SC=O(3n)
right smaller and left smaller can be found out using:
    left vector, right vector and a stack.
*/