class Solution {
public:
    /*bool cmp(pair<int,int>& a,
         pair<int,int>& b)
{
    return a.first<b.first;
}
    int minOperations(vector<int>& nums, vector<int>& n) {
        unordered_map<int,int> mp;
        int c=0,count=0,c1=0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<pair<int, int> > A;
  
    for (auto& it : mp) {
        A.push_back(it);
    }
        sort(A.begin(),A.end());
        for(auto x:A){
            int flag=0;
            for(int i=0;i<n.size();i++){
                if((n[i]%x.first)!=0){
                    flag=1;
                    break;
                }
                else{
                    c1++;
                }
            }
            if(c1==n.size()){
                return c;
            }
            if(flag==1){
                count++;
                c+=x.second;
                //mp.erase(x.first);
            }
        }
        if(count==0||count==nums.size())
            return -1;
        
        return c;
    }*/
    
    int check(vector<int>& nu,int n){
        int a=nu[0];
        for(int i=1;i<n;i++){
            a= __gcd(nu[i],a);
            if(a==1){
                return 1;
            }
        }
        return a;
    }
    
    int minOperations(vector<int>& nums, vector<int>& n) {
        sort(nums.begin(),nums.end());
        int a=check(n,n.size());
        int i=0;
        while(i<nums.size()){
            if(a%nums[i]==0)return i;
            i++;
        }
        return -1;
    }
};