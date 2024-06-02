class Solution {
public:

// memoization::::
// in cound ways we have to return way at base case  only:::
    vector<int> dp;
    int helper(string &s ,int i){
        int n= s.length();
        // if(i>n){
        //     return 0;
        // }
        if(i==s.length()){
            return 1;
        }
        if(s[i]=='0'){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        int count=helper(s, i+1);
        if(i<n-1 && s.substr(i,2)<"27"){
            count+=helper(s,i+2);
        }
        return dp[i]=count;




    }
    int numDecodings(string s) {
        dp.resize(s.length()+1, -1);

        return helper(s, 0);
        
    }
};

// //////////////////////////////

// top down approach===

// class Solution {
// public:
// // in cound ways we have to return way at base case  only:::
//     vector<int> dp;
//     int helper(string &s ,int i){
//         int n= s.length();
//         // if(i>n){
//         //     return 0;
//         // }
//         if(i==s.length()){
//             return 1;
//         }
//         if(s[i]=='0'){
//             return 0;
//         }
//         if(dp[i]!=-1){
//             return dp[i];
//         }
//         int count=helper(s, i+1);
//         if(i<n-1 && s.substr(i,2)<"27"){
//             count+=helper(s,i+2);
//         }
//         return dp[i]=count;




//     }
//     int numDecodings(string s) {
//         dp.resize(s.length()+1, -1);

//         return helper(s, 0);
        
//     }
// };