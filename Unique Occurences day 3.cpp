bool solve(vector<int>& nums) {
    map<int,int> mp;
    for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
    }
    set<int> c;
    for(auto x: mp){
        c.insert(x.second);
    }
    return mp.size()==c.size();
}