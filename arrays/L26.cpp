// rearrange array elements by sign
class Solution
{
public:
    vector<int> rearrangeArray(vector<int> &nums)
    {
        int n = nums.size();
        // initialise an answer
        vector<int> ans(n, 0);
        int posIndex = 0, negIndex = 1;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] < 0)
            {
                ans[negIndex] = nums[i];
                negIndex += 2;
            }
            else
            {
                ans[posIndex] = nums[i];
                posIndex += 2;
            }
        }
        return ans;
    }
}

// leetcode solution
class Solution
{
public:
    vector<int> rearrangeArray(vector<int> &nums)
    {
        vector<int> ans(nums.size(), 0);
        int pos = 0, neg = 1;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > 0)
            {
                ans[pos] = nums[i];
                pos += 2;
            }
            else
            {
                ans[neg] = nums[i];
                neg += 2;
            }
        }
        return ans;
    }
};
// start the array with a positive number, if any of the positive and negative numbers are left, add them at the end without altering the order.
class Solution
{
public:
    vector<int> rearrangeArray(vector<int> &nums)
    {
        vector<int> pos, neg;

        // Step 1: Separate positives and negatives
        for (int num : nums)
        {
            if (num > 0)
                pos.push_back(num);
            else
                neg.push_back(num);
        }

        vector<int> ans;
        int i = 0, j = 0;

        // Step 2: Alternate starting with positive
        while (i < pos.size() && j < neg.size())
        {
            ans.push_back(pos[i++]);
            ans.push_back(neg[j++]);
        }

        // Step 3: Add remaining elements
        while (i < pos.size())
            ans.push_back(pos[i++]);
        while (j < neg.size())
            ans.push_back(neg[j++]);

        return ans;
    }
};
