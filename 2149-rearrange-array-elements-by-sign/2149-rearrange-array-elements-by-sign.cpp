class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> positive;
        vector<int> negative;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                positive.push_back(nums[i]);

            }
            else{
                negative.push_back(nums[i]);
            }
        }
        int i=0;
        int j =0;
        while(i<positive.size() && j<negative.size()){
            ans.push_back(positive[i]);
            ans.push_back(negative[j]);
            i++;
            j++;
        }
        return ans;
        
    }
    
};
// more optimal----->>>
// vector<int> rearrangeArray(vector<int>& nums) {
//         vector<int> ans(n,0);
//         int indexpos = 0, indexneg=1;
//         for(auto num: nums){
//             if(num>0){
//                 ans[indexpos] = num;
//                 indexpos+=2;
//             }
//             if(num<0){
//                 ans[indexneg] = num;
//                 indexneg += 2;
//             }
//         }
//         return ans;
        
//     }