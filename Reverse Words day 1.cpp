string solve(string sen) {
    reverse(sen.begin(),sen.end());
   string s="";
   string se;
   for(auto x:sen){
       if(x!=' '){
           
           s+=x;
       }
       else{
        reverse(s.begin(),s.end());
           se+= s +" ";
           s="";   
       }
   }
   reverse(s.begin(),s.end());
           se+= s;
   return se;
}