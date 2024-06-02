class Solution {
public:
    //  bottom up approach

    
    // if we had c=a condition to return all paths to make the sum to semthing then we could have used the approach like we used in subsets but here we have to compare each call
    // this will give tle:
    vector<int> dp;
    int helper(int i , vector<int>& nums ){
        int n=nums.size();
        if(n==1){
            return nums[n-1];
        }
        dp[n-1]=nums[n-1];
        dp[n-2]=max(nums[n-1], nums[n-2]);
        for(int i=n-3; i>=0; i--){
            dp[i]= max(dp[i+2]+ nums[i], dp[i+1]);

        }
        return dp[0];
    }
    int rob(vector<int>& nums) {
        dp.resize(nums.size()+1, -1);
        int ans=helper(0,nums);
        return ans;
        
    }
};



// using top down memoiztion
// class Solution {
// public:

//     // if we had c=a condition to return all paths to make the sum to semthing then we could have used the approach like we used in subsets but here we have to compare each call
//     // this will give tle:
//     vector<int> dp;
//     int helper(int i , vector<int>& nums ){
//         if(i>=nums.size()){
//             return 0;
//         }
//         // using dp
//         if(dp[i]!=-1){
//             return dp[i];
//         }

//         int take=helper(i+2, nums) + nums[i];
//         int not_take=helper(i+1, nums);
//         return dp[i] = max(take, not_take);
//     }
//     int rob(vector<int>& nums) {
//         dp.resize(nums.size()+1, -1);
//         int ans=helper(0,nums);
//         return ans;
        
//     }
// };