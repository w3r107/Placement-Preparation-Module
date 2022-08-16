bool solve(string s) {
    string s1;
    for(auto x:s){
     if(x>='a'&&x<='z'){
         s1+=x;
     }
    }
    string s2=s1;
     reverse(s1.begin(),s1.end());
     if(s2==s1)
     return true;
     else
     return false;
}