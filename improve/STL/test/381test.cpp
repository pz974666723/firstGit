class RandomizedCollection {
public:
    unordered_map<int, unordered_set<int> > idx;
    vector<int> nums;
    /** Initialize your data structure here. */
    RandomizedCollection() {

    }
    
    /** Inserts a value to the collection. Returns true if the collection did not already contain the specified element. */
     bool insert(int val) {
        nums.push_back(val);
        idx[val].insert(nums.size() - 1);//维护各数字的下标
        return idx[val].size() == 1;
    }
    
    /** Removes a value from the collection. Returns true if the collection contained the specified element. */
    bool remove(int val) {
        if (idx.find(val) == idx.end()) {//数组中是否有val
            return false;
        }
        int i = *(idx[val].begin());
        nums[i] = nums.back();//用数组最后一位覆盖要删除的值
        idx[val].erase(i);//删除该数字第一次出现的下标
        idx[nums[i]].erase(nums.size() - 1);
        if (i < nums.size() - 1) {//防止要删除的元素就是最后一位
            idx[nums[i]].insert(i);
        }
        if (idx[val].size() == 0) {//没有该数了
            idx.erase(val);
        }
        nums.pop_back();//删除数组中最后一位
        return true;
    }
    
    /** Get a random element from the collection. */
    int getRandom() {
        return nums[rand() % nums.size()];
    }
};

/**
 * Your RandomizedCollection object will be instantiated and called as such:
 * RandomizedCollection* obj = new RandomizedCollection();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */