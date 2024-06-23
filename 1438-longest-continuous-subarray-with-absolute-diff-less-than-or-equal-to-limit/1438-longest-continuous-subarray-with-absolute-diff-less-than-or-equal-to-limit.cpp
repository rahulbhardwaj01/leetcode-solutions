class Solution {
public:
// copied solution need to revisit
    int longestSubarray(vector<int>& nums, int limit) {
        deque<int> inc;
        deque<int> dec;
        int max_len = 0;
        int left = 0;

        for (int right = 0; right < nums.size(); ++right) {
            while (!inc.empty() && nums[right] < inc.back()) {
                inc.pop_back();
            }
            inc.push_back(nums[right]);

            while (!dec.empty() && nums[right] > dec.back()) {
                dec.pop_back();
            }
            dec.push_back(nums[right]);

            while (dec.front() - inc.front() > limit) {
                if (nums[left] == dec.front()) {
                    dec.pop_front();
                }
                if (nums[left] == inc.front()) {
                    inc.pop_front();
                }
                ++left;
            }

            max_len = std::max(max_len, right - left + 1);
        }

        return max_len;
    }
};