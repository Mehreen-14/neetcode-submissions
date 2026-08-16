class TimeMap {
public:
    /** Initialize your data structure here. */
    unordered_map<string,vector<pair<string,int>>> data;
    TimeMap() {
        data.clear();
    }
    
    void set(string key, string value, int timestamp) {
       data[key].push_back({value,timestamp});
    }
    
    string get(string key, int timestamp) {
        if(data.find(key)==data.end()){
            return "";
        }
        string s = "";
        const auto& v = data[key];
        int low = 0;
        int high = v.size()-1;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(v[mid].second<=timestamp){
                s = v[mid].first;
                low = mid+1; 
            }
            else{
                high = mid-1;
            }
        }
        return s;
    }
};