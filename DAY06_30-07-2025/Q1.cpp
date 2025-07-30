class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        long long maxSubSum = LONG_MIN;
        long long curSum = 0;
        for (int num : nums)
        {
            curSum += num;
            if (curSum > maxSubSum)
                maxSubSum = curSum;
            if (curSum < 0)
                curSum = 0;
        }
        return maxSubSum;
    }
};