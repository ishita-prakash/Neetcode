class Solution {
public:
    bool isPalindrome(string s) {
        //my solution
        //edge cases
        if(s.length() == 0){
            return true;
        }

        if(s.length() == 1){
            return true;
        }

        string s1; //store preprocessed string in s1

        for(char x: s){
            if(isalnum(x)){
                if(x >= 'A' && x <= 'Z'){ // convert uppercase to lowercase
                    x += 32; 
                    s1 += x;
                }
                else{
                    s1 += x;
                }
            }
        }

        //use stack for reversing the string and comparing
        stack<char> st; 

        for(char x: s1){
            st.push(x);
        }

        string s2;

        while(!st.empty()){
            s2 += st.top();
            st.pop();
        }

        if(s1 == s2)
            return true;
        else
            return false;

    }
};