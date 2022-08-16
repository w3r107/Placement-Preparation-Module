int solve(int num) {
    int ans=0;
    while(num>0){
        int a=num%10;
        ans+=a;
        num=num/10;
    }
    return ans;
}