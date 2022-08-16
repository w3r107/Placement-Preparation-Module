class Solution {
public:
    struct comp{     
        bool operator()(string s1,string s2){
            return s1.size()<s2.size();
        }
    };
    int longestStrChain(vector<string>& arr) {
        sort(begin(arr),end(arr),comp());
        unordered_map<string,int>mp; 
        int ans=1;
        for(auto s:arr){
            mp[s]=1; 
            for(int i=0;i<s.size();i++){
                string temp=s.substr(0,i)+s.substr(i+1); 
                if(mp.find(temp)!=mp.end()){
                    mp[s]=max(mp[s],mp[temp]+1);
                    ans=max(ans,mp[s]); 
                }
            }
        }
        return ans;  
      
    }
};