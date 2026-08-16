class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<bool> zero_rows(m+1,false);
        vector<bool> zero_cols(n+1,false);

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    zero_rows[i] = true;
                    zero_cols[j] = true;
                }
            }
        }

        for(int i=0;i<m;i++){
            if(zero_rows[i]){
                for(int j=0;j<n;j++){
                    matrix[i][j] = 0;
                }
            }
        }
        for(int j=0;j<n;j++){
            if(zero_cols[j]){
                for(int i=0;i<m;i++){
                    matrix[i][j] = 0;
                }
            }
        }
        
    }
};
