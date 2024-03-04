class MinStack {
public:
    MinStack() {
        
    }
    // USING 1 STACK
    stack<pair<int,int>> st; //declaring 1 stack
    int min_val = INT_MAX; //initialising min_val variable

    void push(int val) {
        min_val = min(min_val, val);
        st.push(make_pair(val, min_val));
    }
    
    void pop() {
        st.pop();
        min_val = st.empty() ? INT_MAX : st.top().second; // update min_val after popping
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        return st.top().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

/* --------------USING 2 STACKS---------------

class MinStack {
public:
    MinStack() {
        
    }
    
    stack<int> st, min_st; //declaring 2 stacks

    void push(int val) {
        st.push(val);

        if(min_st.empty() || val <= min_st.top()){
            min_st.push(val);
        }
    }
    
    void pop() {
        if(st.top() == min_st.top()){
            min_st.pop();
        }

        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return min_st.top();
    }
};
*/