class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";
        int balance=0;
        for(char ch:s){
            if(ch=='('){
                balance++;
                if(balance>1){
                    ans+=ch;
                }
            }
            else{
                if(balance>1){
                    ans+=ch;
                }
                balance--;
            }
        }
        return ans;
    }
};