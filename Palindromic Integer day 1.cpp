bool solve(int num) {
    int a=0,b;
    int c=num;
    while(num>0){
        b=num%10;
        a=(a*10)+b;
        num=num/10;
    }
    if(a==c){
        return true;
    }
    else{
return false;}

}