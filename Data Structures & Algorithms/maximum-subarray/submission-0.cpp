class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int sum = nums[0];
        int max_sub = nums[0];

        for(int i=1;i<n;i++){
            if(nums[i]>sum+nums[i]) sum = nums[i];
            else sum += nums[i];
            if(sum>max_sub) max_sub = sum;
        }
        return max_sub;
        

    }
};
