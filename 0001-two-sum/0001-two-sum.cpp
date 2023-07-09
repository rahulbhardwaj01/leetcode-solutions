
class Solution {
public:
    
      vector<int> twoSum(vector<int>& nums, int target) {
                map<int,int> m;
                vector<int> vec;
                int n= nums.size();
                for(int i=0;i<n;i++)
                {
                    
                        int diff = target - nums[i];
                        if(m.find(diff) != m.end())
                        {
                        auto p = m.find(diff);        
                        vec.push_back(p->second);
                        vec.push_back(i);
                        }
                        m.insert(make_pair(nums[i],i));
                }
          
                return vec;
}
};
