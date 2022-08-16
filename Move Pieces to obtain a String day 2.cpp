class Solution {
public:
    bool canChange(string start, string target) {
         if (start.size() != target.size()) {
            return false;
        }
       
        int l = 0, r = 0;
        for (int i = 0; i < start.size(); ++i) {
            if (start[i] == 'L') {
                ++l;
            }
            if (r != 0 && l != 0) {
                return 0;
            }
            if (target[i] == 'L') {
                --l;
            }
            
            if (start[i] == 'R') {
                ++r;
            }
            if (r !=0 && l != 0) {
                return 0;
            }
            if (target[i] == 'R') {
                --r;
            }
            
            if (r < 0 || l > 0 || (r > 0 && l > 0)) {
                return false;
            }
        }
        
        return (r == 0 && l == 0);
    }
};