class Solution {
public:
    void paranthesisHelper(int n, vector<string>& res, int open, int close, string str){
        if(str.size()==n*2){
            res.push_back(str);
            return;
        }
        if(open<n){
            paranthesisHelper(n,res,open+1,close,str+"(");
        }
        if(close<open){
            paranthesisHelper(n,res,open,close+1,str+")");
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        paranthesisHelper(n, res,0,0,"");
        return res;
    }
};