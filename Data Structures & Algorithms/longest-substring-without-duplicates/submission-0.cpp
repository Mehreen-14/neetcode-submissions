#define CHARS 256
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int count = 0;
        for(int i=0;i<n;i++){
            vector<bool> visited(n,false);
            for(int j=i;j<n;j++){
                if(visited[s[j]]) break;
                else{
                    count = max(count,j-i+1);
                    visited[s[j]] = true;
                }
            }
        }
        return count;
    }
};
