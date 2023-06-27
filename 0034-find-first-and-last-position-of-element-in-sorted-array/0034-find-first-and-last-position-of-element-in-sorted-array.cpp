class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        bool fst_index=false;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                fst_index=true;
                ans.push_back(i);
                break;
            }
        }
        if(fst_index==false){
            ans.push_back(-1);
        }
        bool lst_index=false;
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]==target){
                lst_index=true;
                
                ans.push_back(i);
                break;
            }
        }
        if(lst_index==false){
            ans.push_back(-1);
        }
        return ans;

        
    }
};