vector<int> solve(string s) {
   vector<int>res;
   vector<int> a(26,-1);
   int n=s.size();
   for(int i=0;i<n;i++){
       a[s[i]-'a']=i;
   }
   int j=0,k=0;
   for(int i=0;i<n;i++){
       j=max(j,a[s[i]-'a']);
       if(i==j){
           res.push_back(i-k+1);
           k=i+1;
       }
   }
   return res;
}