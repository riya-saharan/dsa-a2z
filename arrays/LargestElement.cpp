#include <iostream>
using namespace std;

int LargestElement(int arr[], int n)
{
    int Largest = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > Largest)
        {
            Largest = arr[i];
        }
    }
    return Largest;
}
int main()
{
    int arr[] = {12, 45, 7, 89, 34};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Largest element: " << LargestElement(arr, n);
    return 0;
}

// leetcode solution
class Solution
{
public:
    int largestElement(vector<int> &nums)
    {
        int Largest = nums[0];

        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] > Largest)
            {
                Largest = nums[i];
            }
        }
        return Largest;
    }
};