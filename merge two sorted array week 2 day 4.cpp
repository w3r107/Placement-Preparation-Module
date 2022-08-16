class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
      int i=m+n-1;
        m-=1;
        n-=1;
        while(n>=0){
            if(m>=0&&nums1[m]>nums2[n]){
                nums1[i]=nums1[m];
                i--;
                m--;
            }
            else{
                nums1[i]=nums2[n];
                i--;
                n--;
            }
        }
    }
};