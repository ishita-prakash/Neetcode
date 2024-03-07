class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> st;

        for(string str: tokens){
            if(isOperator(str)){
                int res = 0;

                int e2 = stoi(st.top());
                st.pop();

                int e1 = stoi(st.top());
                st.pop();

                if(str == "+")
                    res = e1 + e2;
                
                else if(str == "-")
                    res = e1 - e2;

                else if(str == "*")
                    res = e1 * e2;

                else if(str == "/")
                    res = e1 / e2;

                st.push(to_string(res));
            }

            else{
                st.push(str);
            }
        }
        return stoi(st.top());
    }

    bool isOperator(string str){
        return (str == "+" || str == "-" || str == "*" || str == "/");
    }
};