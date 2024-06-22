class Solution {
public:

    int findAllSubarraysWithGivenSum(vector < int > & nums, int k) {
        int n = nums.size();
        map<int ,int> mpp;
        int preSum = 0, cnt = 0;
        mpp[0] = 1;
        for (int i = 0; i < n; i++) {
            preSum += nums[i];
            int remove = preSum - k;
            cnt += mpp[remove];
            mpp[preSum] += 1;
        }
        return cnt;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        // int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                nums[i]=0;
            }
            else{
                nums[i]=1;
            }
        }
        return findAllSubarraysWithGivenSum(nums,k);
        
    }
};

