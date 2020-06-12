class RandomizedSet {
public:
    /** Initialize your data structure here. */
    vector<int> num;
    unordered_map<int, int> index;
    RandomizedSet() {
        
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        if (index.find(val) != index.end())
            return false;
        num.push_back(val);
        index.insert({val, num.size() - 1});
        return true;
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        if (index.find(val) == index.end())
            return false;
        int pos = index[val];
        num[pos] = num[num.size() - 1];
        index[num[pos]] = pos;
        index.erase(val);
        num.pop_back();
        return true;
    }
    
    /** Get a random element from the set. */
    int getRandom() {
        return num[rand() % num.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
