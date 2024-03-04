class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int score=0;
        int ans = 0;
        int j=tokens.size()-1;
        for(int i=0;i<tokens.size() && j>=0;){
            if(tokens[i]<=power){
                power=power-tokens[i];
                score++;
                i++;
            }
            else if(score){
                power=power+tokens[j];
                score--;
                j--;

            }
            else{
                break;
            }
            ans = max(ans, score);
        }
        return ans;
    }
};