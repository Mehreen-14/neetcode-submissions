class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        int n = nums.size();
        if(n<k) return {};
        //stack<int> s;
        int count = 0;  
        vector<int> result;
        bool visited[n];
        vector<pair<int, int>> freq;
        for(int i=0;i<n;i++){
            visited[i] = false;
        }
        for(int i=0;i<n;i++){
            if(visited[i]==false){
                count = 1;
                for(int j=i+1;j<n;j++){
                    if(nums[i]==nums[j]){
                        count++;
                        visited[j] = true;
                    }
                }
                freq.push_back({nums[i],count});
                
            }
        }
        cout << "Freq size " << freq.size() << endl;
        for(auto it : freq) {
            cout << "Element: " << it.first << " Frequency: " << it.second << endl;
        }
        sort(freq.begin(), freq.end(), [](pair<int, int> &a, pair<int, int> &b) {
            return a.second > b.second;
        });
        for(int i = 0; i < k; i++) {
            result.push_back(freq[i].first);
        }
        return result;

        
    }
};