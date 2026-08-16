class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        //0,1,1,2,3,4,5,6 //c :1,2,3,4   //m:2,3
        //2 3 4 4 5 10 20 //2,3,     m:2
        if(n==0) return 0;
        int count = 1;
        int maxcount= 1;
        for(int i=1;i<n;i++){
            if((nums[i]-nums[i-1]) == 1){
                count += 1;
                maxcount = max(count,maxcount);
            }
            else if(nums[i]==nums[i-1]){
                continue;
            }
            else{
                count = 1;
            }
        }
        return maxcount;
    }
};
