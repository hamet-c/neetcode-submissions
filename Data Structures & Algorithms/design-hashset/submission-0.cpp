class MyHashSet {
public:
    vector<bool> test;
    MyHashSet() {
        test = vector<bool>(1000001, false);
    }
    
    void add(int key) {
        test[key] = true;
    }
    
    void remove(int key) {
        test[key] = false;
    }
    
    bool contains(int key) {
        return test[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */