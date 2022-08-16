vector<int> Solution::solve(vector<int> &A) {
    int n=A.size();
    int c=0,c1=0;
    for(int i=0;i<n;i++){
        if(A[i]==0){
            c++;
        }
        if(A[i]==1){
            c1++;
        }
    }
    for(int i=0;i<c;i++){
        A[i]=0;
    }
    for(int i=c;i<c+c1;i++){
        A[i]=1;
    }
    
  return A;  
}
