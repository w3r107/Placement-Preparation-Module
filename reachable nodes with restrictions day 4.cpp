class Solution {
public:
    int reachableNodes(int n, vector<vector<int>>& e, vector<int>& r) {
        unordered_set<int> s(r.begin(),r.end());
       vector<int>v1[n];
        vector<int> v(n,false);
        for(auto x: e){
            v1[x[0]].push_back(x[1]);
            v1[x[1]].push_back(x[0]);
        }
        queue<int> q;
        q.push(0);
        v[0]=true;
        int res=1;
        
        while(!q.empty()){
            int a=q.front();
            q.pop();
            for(auto j:v1[a]){
                if(v[j]==false&&s.count(j)==0){
                    v[j]=true;
                    q.push(j);
                    res++;
                }
                    
            }
        }
        return res;
    }
};