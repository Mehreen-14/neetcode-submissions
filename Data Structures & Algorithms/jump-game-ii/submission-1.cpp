class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int curr = 0;
        int farthest = 0;
        if(n==0) return 0;
        int jump = 0;
        for(int i=0;i<n-1;i++){
            farthest = max(farthest,i+nums[i]);
            if(i>=curr){
                jump++;
                curr = farthest;
                if(curr==n-1) break;
            }
        }
        
        return jump;
    }
};
