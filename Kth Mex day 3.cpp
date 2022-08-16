int kthMex(int n, int k, int A[]) {
    // code here
    set<int> s;
    for(int i=0;i<n;i++){
        s.insert(A[i]);
    }
    int j=0;
    while(true){
        if(s.find(j)==s.end()){
            k--;
        }
        if(k==0)
        return j;
        j++;
    }
    return -1;
}