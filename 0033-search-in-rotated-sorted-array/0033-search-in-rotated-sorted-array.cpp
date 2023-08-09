class Solution {
    int findinv(vector<int>& nums){
        int n = nums.size(),lo=0, hi= n-1, invIdx=0;
        while(lo <= hi){
            int mid = (hi+lo)>>1;
            if(mid != 0 && nums[mid] < nums[mid-1]){
                invIdx = mid;
                break;
            }
            if(nums[mid] < nums[0]) hi = mid-1;
            else lo = mid+1;
        }
        return invIdx;
    }

    int bs(vector<int>& nums, int lo, int hi, int key){
        while(lo <= hi){
            int mid= (hi+lo)>>1;
            if(nums[mid] == key) return mid;
            if(nums[mid] < key) lo = mid+1;
            else hi = mid-1;
        }
        return -1;
    }
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size(), invIdx=0;
        if(nums[n-1] < nums[0]) invIdx = findinv(nums);
        int ans = bs(nums, 0, invIdx-1, target);
        if(ans == -1) ans = bs(nums, invIdx, n-1, target);
        return ans;
    }
};