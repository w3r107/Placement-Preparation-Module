class Solution {
public:
    void sortColors(vector<int>& nums) {
        int c1=0,c2=0,c3=0;
        if(nums.size()<=1)
        return;
        else{
            for(int i=0;i<nums.size();i++){
                if(nums[i]==0)
                    c1++;
                if(nums[i]==1)
                    c2++;
                if(nums[i]==2)
                    c3++;
            }
           for(int i=0;i<c1;i++){
            nums[i]=0;
           }
            for(int i=c1;i<(c2+c1);i++){
            nums[i]=1;
               
           }
            for(int i=(c1+c2);i<(c3+c1+c2);i++){
            nums[i]=2;
               
           }
        }
    }
};