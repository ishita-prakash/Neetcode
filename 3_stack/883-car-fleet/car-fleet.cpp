class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> v;

        for(int i=0; i<position.size(); i++){
            v.push_back({position[i], speed[i]});
        }

        sort(v.begin(), v.end());

        stack<float> st;

        float time;

        for(auto x: v){
            time = (float)(target - x.first) / (float)x.second;

            if(st.empty()){
                st.push(time);
            }

            //current time >= top of stack's time => fleet will occur.
            while(!st.empty() && time >= st.top()){
                st.pop();
            }

            st.push(time);
        }

        return st.size();
    }
};