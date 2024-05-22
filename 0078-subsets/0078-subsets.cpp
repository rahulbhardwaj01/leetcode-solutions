class Solution {
public:

    void subsetproblem(vector<int>&nums,int i, vector<vector<int>>&ans, vector<int> &subset){
        if(nums.size()==i){
            ans.push_back(subset);
            return;
        }
        // case of take:
        subset.push_back(nums[i]);
        subsetproblem(nums,i+1,ans , subset);

        subset.pop_back();
        subsetproblem(nums,i+1, ans, subset);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        // for genersting the subsets and at the end addingf into teh ans ::
        vector<int> subset;
        subsetproblem(nums,0,ans, subset);
        return ans;
        
    }
};