class Solution {
  public:
    long long maximumMultiple(int n, int A[]) {
        // code here
       sort(A,A+n);
       int i=0;
       while(A[i]<0){
           i++;
       }
       int k=i;
       i--;
       int m=n-1;
       long long ans=LLONG_MIN;
       if(i<n/2){
           while(i>=0 && m>k-1){
               ans=max(ans,(long long)A[i]*A[m]);
               m--;
               i--;
           }
           int j=0;
           while(i>=0 && i>j){
               ans=max(ans,(long long)A[i]*A[j]);
               i--;
               j++;
           }
           j=k;
           while(j>=0 && m>j){
               ans=max(ans,(long long)A[m]*A[j]);
               j++;
               m--;
           }
           return ans;
       }
       else{
           
           m=n-1;
           i=0;
           ans=LLONG_MIN;
           while(m>i){
           ans=max(ans,(long long)A[m]*A[i]);
           m--;
           i++;
           }
           return ans;
       }
    }
};