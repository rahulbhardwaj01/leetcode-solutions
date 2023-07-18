class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int flag=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target||nums[i]>target){
                flag=i;
                break;
            }
            else if(i==nums.size()-1){
                return nums.size();
            }
        }
        return flag;
    }
};

// here we can also use binary searchhhh:: try it:
