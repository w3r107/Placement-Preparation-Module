int solve(vector<int>& nums) {
    int m=0,m1=INT_MIN;
    for(int i=0;i<nums.size();i++){
        m+=nums[i];
        if(m1<m){
            m1=m;
        }
        if(m<0)
        m=0;
    }
    return m1;
}