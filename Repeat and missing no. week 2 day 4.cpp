vector<int> Solution::repeatedNumber(const vector<int> &A) {
   vector<int> arr = A; // remove const
    int x = 0, y = 0;
    
    for (int i = 0; i < arr.size(); i++) { 
        if (arr[abs(arr[i]) - 1] > 0) 
            arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1]; 
        else {
            x = abs(arr[i]);
        }
    }
    for (int i = 0; i < arr.size(); i++) { 
        if (arr[i] > 0) {
            y = i+1;
            break;
        }
    } 
    return {x, y};
    
}