class Solution {
public:

    string encode(vector<string>& strs) {
        string encode="";
        for(const string& s : strs){
            encode += to_string(s.size())+"#"+s;
        }
        return encode;
    }

    vector<string> decode(string s) {
        int i = 0;
        int n = s.size();
        vector<string> result;
        while(i<n){
            int j = i;
            while(s[j]!='#') j++;
            int length = stoi(s.substr(i,j-i));
            string str = s.substr(j+1,length);
            result.push_back(str);
            i = j+1+length;
        }
        return result;

    }
};
