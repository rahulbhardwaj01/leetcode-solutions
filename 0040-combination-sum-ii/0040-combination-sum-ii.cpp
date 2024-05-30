class Solution {
private :
    
void help(int i, vector<int> &arr, int n, vector<int> &subSet, vector<vector<int>> &powerSet, int sum, int target) {
        
    if(sum == target) 
    {
        powerSet.push_back(subSet) ;
        return;
    }
    
    if(sum > target) return ;
    
    // If we reach the end of arr[]
    
    if(i == n) return;

    
    subSet.push_back(arr[i]) ;
    sum += arr[i] ;
    
    help(i + 1, arr, n, subSet, powerSet, sum, target) ;
    
    
    subSet.pop_back();
    sum -= arr[i];
    
    // Use the While Loop to skip all the duplicate occurrences of i-th Element
    
    while(i + 1 < arr.size() && arr[i] == arr[i + 1]){
        
        i++ ;
    }
    
    help(i + 1, arr, n, subSet, powerSet, sum, target) ;
}

    
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
    vector<int> subSet ;
    vector<vector<int>> powerSet ;
    int sum = 0;
    int n = candidates.size() ;
    sort(candidates.begin(), candidates.end()) ;

    help(0, candidates, n, subSet, powerSet, sum, target) ;
        
    return powerSet ;
}
};

/* 
Time Complexity: O(2^N)
Space Complexity: O(N)
*/