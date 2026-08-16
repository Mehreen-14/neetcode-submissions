class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result;
        int n = numbers.size();
        unordered_map<int,int> map;
        for(int i=0;i<n;i++){
            int complement = target-numbers[i];
            if(map.find(complement) != map.end()){
                result.push_back(map[complement]+1);
                result.push_back(i+1);
                return result;
            }
            map[numbers[i]] = i;
        }
        return result;
    }
};
