class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
//         base case when mid==low==high tab ise pta nhi kaha jaana hai...
        while(low<=high){
            int mid= (low+high)/2;
            if(nums[mid]==target){
                return true;
            }
//case when mid==low==high tab ise pta nhi kaha jaana hai...
            if(nums[low]==nums[mid] && nums[mid]==nums[high]){
                low++;
                high--;
                continue ; // to move to next iteration
            }

            // first check sorted half;
            if(nums[low]<=nums[mid]){
            // now check for sprted part bcs it would be very easwy to checlk there;
                if(nums[low]<=target && target<nums[mid]){
                    high=mid-1;
                } 
                else{
                    low=mid+1;

                }
            }
            else{
                if(nums[mid]<target && target<=nums[high]){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
        }
        return false;
        
    }
};