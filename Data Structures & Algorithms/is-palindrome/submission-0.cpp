class Solution {
public:
    bool isPalindrome(string s) {
        string result;
        result.reserve(s.size());
        for(char c:s){
            if(isalnum(static_cast<unsigned char>(c))){
                result += tolower(static_cast<unsigned char>(c));
            }
        }
        string reversed = result;
        reverse(reversed.begin(),reversed.end());
        return reversed == result;
        
    }
};
