class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        //monotonic decreasing stack concept
        vector<int> res(temperatures.size(), 0);

        stack<pair<int,int>> st; //value, index

        for(int i=0; i<temperatures.size(); i++){
            while(!st.empty() && temperatures[i] > st.top().first){
                res[st.top().second] = i - st.top().second;
                st.pop();
            }

            st.push({temperatures[i], i});
        }
        
        return res;
    }
};