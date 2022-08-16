int Solution::solve(vector<int> &A) {
    int l=0, r=A.size(), m;
    while(l<=r){
        m=(l+r)/2;
        if(A[m]>A[m+1]){
            r=m;
        }else{
            l=m+1;
        }
        if(l==r)
            return A[l];
    }
}
