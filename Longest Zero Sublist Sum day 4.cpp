int solve(vector<int>& nums) {
  map<int,int> mp;

    int m=0,ans=0;
    for(int i=0;i<nums.size();i++){
        ans+=nums[i];
        if(ans==0){
          m=i+1;
        }
   if(mp.find(ans)!=mp.end()){
       m=max(m,i-mp[ans]);
   }
         else{
             mp[ans]=i;
         }
    }
    return m;
}