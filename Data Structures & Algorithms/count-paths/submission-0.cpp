class Solution {
public:
    int uniquePaths(int m, int n) {
        int total = m+n-2;
        int steps = min(m,n)-1;
        long long ans = 1;
        for(int i=1;i<=steps;i++){
            ans = ans * (total-steps+i)/i;
        }
        return ans;
        
    }
};
