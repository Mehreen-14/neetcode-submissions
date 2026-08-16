class LRUCache {

public:
    int capacity;
    unordered_map<int,list<pair<int,int>>::iterator> map;
    list<pair<int,int>> cache;
    LRUCache(int capacity) : capacity(capacity) {
        //cache.reserve(capacity);
    }
    
    int get(int key) {
        if(map.find(key)==map.end())
            return -1;
        
        //get kora item k front e ana lagbe
        auto it = map.find(key);
        auto node = it->second;
        int value = node->second;
        cache.erase(node);
        cache.push_front({key,value});
        map[key] = cache.begin();
        return value;

        
    }
    
    void put(int key, int value) {
        if(map.find(key)!=map.end()){
            cache.erase(map[key]);
        }
        else if(cache.size()>=capacity){
            map.erase(cache.back().first);
            cache.pop_back();
        }

        cache.push_front({key,value});
        map[key] = cache.begin();
        
    }
};