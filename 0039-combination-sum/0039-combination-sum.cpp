class Solution {
  public:
    void findCombination(int ind, int target,int sum ,vector < int > & arr, vector < vector < int >> & ans, vector < int > & ds) {
      if(sum>target){
        return;
      }  
      if (ind == arr.size()) {
        if (sum == target) {
          ans.push_back(ds);
        }
        return;
      }
      // pick up the element
        sum+= arr[ind];
        ds.push_back(arr[ind]);
        findCombination(ind, target, sum  , arr, ans, ds);
        ds.pop_back();
        sum-=arr[ind];
        findCombination(ind + 1, target,sum,  arr, ans, ds);
    }
  public:
    vector < vector < int >> combinationSum(vector < int > & candidates, int target) {
      vector < vector < int >> ans;
      vector < int > ds;
      findCombination(0, target,0, candidates, ans, ds);
      return ans;
    }
};