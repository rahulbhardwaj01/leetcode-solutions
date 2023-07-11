// a bit more timecomplexity other solution used sorting and then compared first and last index strings bcs acc to them lexographical order is followed bby strings::

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs)
    {
        string ans;
        for(int i=0;i<strs[0].size();i++)
        {
            for(int j=1;j<strs.size();j++)
            {
                if(strs[0][i] != strs[j][i])
                {
                    return ans;
                }
            }
            ans += strs[0][i];
        }
        return ans;
    }
};