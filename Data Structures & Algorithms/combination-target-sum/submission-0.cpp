class Solution {
public:
    void backtrack(vector<vector<int>>& ans, vector<int>& candidates, vector<int>& curr, int target, int start){
        if(target<0){
            return;
        }
        if(target == 0){
            ans.push_back(curr);
            return;
        }
        for(int i=start;i<candidates.size();i++){
            curr.push_back(candidates[i]);
            backtrack(ans, candidates, curr, target-candidates[i], i);
            curr.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> curr;
        backtrack(ans, candidates, curr, target, 0);
        return ans;
        
    }
};