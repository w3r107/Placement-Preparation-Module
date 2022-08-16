int solve(int n) {
    int i=1;
    int sum=0;
    while(n){
        if(i%2!=0){
            sum+=i;
            n--;
        }
        i++;
    }
    return sum;
}