// Given a string containing just the characters '(' and ')', find the length of the longest valid (well-formed) parentheses substring.

class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int>st;
        st.push(-1);
        int mx=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(i);
            }else{
                st.pop();
                if(st.empty()){
                    st.push(i);
                }else{
                mx=max(mx,i-st.top());    
                }
                
            }
        }
        return mx;
    }
};
