class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        for(int i=0;i<row;i++){
            if(matrix[i][0] <= target && matrix[i][col-1]>= target){
                int low_bound = 0;
                int high_bound = col-1;
                while(low_bound<=high_bound){
                    int mid = low_bound + (high_bound - low_bound)/2;
                    if(matrix[i][mid] == target){
                        return true;
                    }
                    if(matrix[i][mid] < target){
                        low_bound = mid+1;
                    }
                    else{
                        high_bound = mid-1;
                    }
                }
            }
        }
        return false;
        
    }
};
