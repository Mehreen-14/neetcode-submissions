class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> digit2letter = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> result;
        if(digits.empty()){
            return result;
        }
        result.push_back("");
        for(char digit : digits){
            int num = digit-'0';
            vector<string> temp;
            string letters = digit2letter[num];
            for(const string& com:result){
                for(char letter : letters){
                    temp.push_back(com+letter);
                }
            }
            result = temp;
        }
        return result;
    }
};
