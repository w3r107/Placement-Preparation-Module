class Solution {
public:
    int digitSum(long n)
{
    long sum = 0;
    while (n) {
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}
    
    int maximumSum(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int, int> mp;
    int ans = -1, pairi =0,pairj=0;
    for (int i=0;i<n; i++) {
 
        
        int temp = digitSum(nums[i]);
 
        if (mp[temp]!=0) {
            if (nums[i]+mp[temp]>ans) {
                pairi=nums[i];
                pairj=mp[temp];
                ans=pairi + pairj;
            }
        }
 
        mp[temp] = max(nums[i], mp[temp]);
    }
 
return ans;
    }
};