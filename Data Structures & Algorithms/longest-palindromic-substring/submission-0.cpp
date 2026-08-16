class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        string result;
        int reslen = 0;
        for(int i=0;i<n;i++){
            //odd length
            int left = i;
            int right = i;
            while(left>=0 && right<n && s[left]==s[right]){
                if(right-left+1>reslen){
                    result = s.substr(left,right-left+1);
                    reslen = right-left+1;
                }
                left--;
                right++;
            }

            //even length
            left = i;
            right = i+1;
            while(left>=0 && right<n && s[left]==s[right]){
                if(right-left+1>reslen){
                    result = s.substr(left,right-left+1);
                    reslen = right-left+1;
                }
                left--;
                right++;
            }
        }
        return result;
        
    }
};
