class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        /*int n=nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto x:mp){
            if(x.second>1){
                return x.first;
            }
        }
        sort(nums.begin(),nums.end());
        
        int l=0,h=nums.size()-1;
        
        while(l<=h)
        {
            int mid= (l+h)/2;
            if(nums[mid]==nums[mid+1]|| nums[mid-1]==nums[mid])
            {
                return nums[mid];
            }
            
            if(mid>=nums[mid]) h=mid-1;
            else low=m+1;
        }
        return nums[l];*/
        int n=nums.size();
       int v[n];
       for(int i=0;i<n;i++){
           v[i]=0;  
       }
       for(int i=0;i<n;i++){
           v[nums[i]]++;
       }
       for(int i=1;i<n+1;i++){
           if(v[i]>1){
               return i;
           }
       }
        return -1;
    }
};