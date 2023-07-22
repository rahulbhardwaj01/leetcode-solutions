// a bit more timecomplexity other solution used sorting and then compared first and last index strings bcs acc to them lexographical order is followed bby strings::


// sort() function implicitly converts strings into ASCII while sorting.
// like in inetegrs it sort similiarly sees strings as ascii and sorts all"""

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

// 

// class Solution {
//  public:
//      string longestCommonPrefix(vector<string>& strs){

//          sort(strs.begin(),strs.end());
//          int i=0;
//          int j=0;
//          string s1=strs[0];
//          string s2=strs[strs.size()-1];
//          string ans="";
//          while(i<s1.size()&& j<s2.size()){
//              if(s1[i]==s2[j]){
//                  ans+=s1[i];
//              }
//              else{
//                  break;
//              }
//          }
//          return ans;

//      }
// };

// tle bcs tc==0(nlogn*m) for strings