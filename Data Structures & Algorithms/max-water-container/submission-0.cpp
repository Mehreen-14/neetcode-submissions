class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxA = 0;
        int left = 0;
        int right = heights.size()-1;
        while(left<right){
            int width = right-left;
            int min_h = min(heights[left],heights[right]);
            maxA = max(maxA,width*min_h);

            if(heights[left]<heights[right]) left++;
            else right--;
        }
        return maxA;
        
    }
};
