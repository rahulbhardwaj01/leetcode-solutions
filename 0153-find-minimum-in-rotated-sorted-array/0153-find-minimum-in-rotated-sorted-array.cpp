class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
//         we have to find min for every sortwd subparts
        int ans=INT_MAX;
        // apply binary search
        while(low<=high){
            int mid=(low+high)/2;
            // see for sorted part and find min index using low{bcs it is min in sorted arrayu}
            if(nums[low]<=nums[mid] ){
                ans=min(ans,nums[low]);
                low=mid+1;
            }
            else{
                ans=min(ans,nums[mid]);
                high=mid-1;

            }

        }return ans;
    }
};