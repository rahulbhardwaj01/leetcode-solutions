class Solution
{
public:


// directly copied code need to revisit >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// ḍidnt understand
    int minPatches(vector<int> &nums, int n)
    {
        long long int currentSum = 1; 
        int patches = 0, index = 0;   

        while (currentSum <= n)
        {
            if (index < nums.size() && nums[index] <= currentSum)
            {
                currentSum += nums[index];; // Include nums[index] in the range
                index++;
            }
            else
            {
                currentSum += currentSum;
                patches++;
            }
        }
        return patches;
    }
};