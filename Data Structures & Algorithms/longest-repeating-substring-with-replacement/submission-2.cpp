#define NO 26
class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        vector<int> count(NO,0);
        int left = 0;
        int maxlen = 0,maxcount = 0;
        for(int right=0;right<n;right++){
            count[s[right]-'A']++;
            maxcount = max(maxcount,count[s[right]-'A']);
            while(right-left+1-maxcount>k){
                count[s[left]-'A']--;
                left++;
            }
            maxlen = max(maxlen,right-left+1);
        }
        return maxlen;
        
    }
};
