class Solution {
public:
    bool isValid(string s) {
        stack<int> q;
        for(auto c:s){
            if(c=='(' || c=='{' || c=='['){
                q.push(c);
            }
            else{
                if(q.empty()) return false;
                else if(c==')' && q.top()!='('){
                   return false; 
                }
                if(c=='}' && q.top()!='{'){
                    return false;
                }
                if(c==']' && q.top()!='['){
                    return false;
                }
               q.pop();  
            }
           
        }
        bool b = false;
        if(q.empty()){
            b = true;
        }
        return b;
        
    }
};
