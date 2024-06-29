// for TC: we are jyust tryoing to fill up our 2d array hence  O(n*m);

class Solution {
public:
    int findLCSLength(string &text1, string &text2, int i, int j,vector<vector<int>>&dp) {
        int ans=0;
        if (i == text1.size() || j == text2.size()) return 0;


        // Case 1: Characters match, move both indices forward
        if(dp[i][j]!=-1){
            return dp[i][j]; 
        }
        if (text1[i] == text2[j]) {
            ans = 1 + findLCSLength(text1, text2, i + 1, j + 1,dp);
        } else {
            // Case 2: Skip the current character of text1
            int out1 = findLCSLength(text1, text2, i, j + 1,dp);
            // Case 3: Skip the current character of text2
            int out2 = findLCSLength(text1, text2, i + 1, j,dp);
            ans=max(out1, out2);
        }
        return dp[i][j]=ans;

    }

    int longestCommonSubsequence(string &text1,string &text2) {
        int l1=text1.length();
        int l2=text2.length();
        vector<vector<int>> dp(l1 + 1, vector<int>(l2 + 1, -1));
        return findLCSLength(text1, text2, 0, 0,dp);
    }
};