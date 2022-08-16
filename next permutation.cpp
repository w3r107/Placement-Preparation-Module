class Solution {
public:
    void nextPermutation(vector<int>& nums) {
               int n= nums.size();
        int l=0;
        
        for (int i =n-1;i>=1;i--) {
            if (nums[i]>nums[i - 1]) {
                l = i;
                break ;
            }
        }
        //cout<<l;
        sort(nums.begin()+l,nums.end());
        if (l != 0) {
            auto b= upper_bound(nums.begin() + l, nums.end(), nums[l - 1]) - nums.begin();
            //cout<<b;
            swap(nums[l - 1], nums[b]);            
        }
        
        return ;
    }
};