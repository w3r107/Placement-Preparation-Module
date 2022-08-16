vector<string> solve(int n) {
    vector<string> s(n);
    for(int i=0;i<n;i++){
        if((i+1)%15==0){
            s[i]="FizzBuzz";
        }
        else if((i+1)%3==0){
            s[i]="Fizz";
        }
        else if((i+1)%5==0){
            s[i]="Buzz";
        }
        else{
            s[i]=to_string(i+1);
        }
    }
    return s;
}