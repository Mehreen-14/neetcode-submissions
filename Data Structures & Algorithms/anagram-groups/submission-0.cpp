#define CHARS 256
class Solution {
public:
    string getKey(string str){
        string key = "";
        sort(str.begin(),str.end());
        for(char c:str){
            key += c;
        }
        return key;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string,vector<string>> mp;
        for(auto s : strs){
            string key = getKey(s);
            mp[key].push_back(s);
        }
        for(auto i : mp){
            result.push_back(i.second);
        }
        return result;
    }
};
