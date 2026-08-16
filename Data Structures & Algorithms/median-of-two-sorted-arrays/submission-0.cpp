class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merged;
        merged.insert(merged.end(), nums1.begin(), nums1.end());
        merged.insert(merged.end(), nums2.begin(), nums2.end());

        sort(merged.begin(),merged.end());
        int n = merged.size();
        double median;
        if(n%2){
            int mid = n/2;
            median = merged[mid];
        }
        else{
            int leftMid = n/2-1;
            int rightMid = n/2;
            median = (merged[leftMid]+merged[rightMid])/2.0;
        }

        return median;
    }
};