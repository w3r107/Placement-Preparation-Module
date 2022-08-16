class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int,int> mp;
        //vector<int> v;
        int count=0,c=0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto x: mp){
            if(x.second%2!=0){
              c+=1;
            }
            count+=x.second/2;
        }
       
        
        return {count,c};
    }
};