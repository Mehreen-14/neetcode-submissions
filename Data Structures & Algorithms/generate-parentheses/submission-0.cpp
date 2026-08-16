class Solution {
public:
    void backtrack(vector<string>& result,string curr,int open,int close,int max){
        if(curr.size()==max*2){
            result.push_back(curr);
            return;
        }
        if(open<max){
            backtrack(result,curr+"(",open+1,close,max);
        }
        if(close<open){
            backtrack(result,curr+")",open,close+1,max);
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> result;
        backtrack(result,"",0,0,n);
        return result;
        
    }
};
