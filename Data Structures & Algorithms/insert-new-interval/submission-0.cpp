class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
        int n = intervals.size();
        vector<vector<int>> ans;
        if(n == 0) return {};
        sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[0] < b[0];
        });

        ans.push_back(intervals[0]);

        for(int i=1;i<n;i++){
            vector<int>& last = ans.back();
            if(intervals[i][0]<=last[1]){
                last[1]=max(last[1],intervals[i][1]);
            }
            else{
                ans.push_back(intervals[i]);
            }
        }  
        return ans;
    }
};



