// largest element in an array
// brute force solution
//  take input array, sort the array, the last element after sorting will be the largest
#include <iostream>
#include <algorithm> //this library contains sort() function
using namespace std;

int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // sort the array
    sort(arr, arr + n);

    // largest element is the last element
    int largest = arr[n - 1];

    cout << "Largest element is: " << largest << endl;

    return 0;
}

// by using bubble sort
for (int i = 0; i < n - 1; i++)
{
    for (int j = 0; j < n - i - 1; j++)
    {
        if (arr[j] > arr[j + 1])
        {
            // swap
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
        }
    }
}
// time complexity = o(NlogN) space complexity = o(1)

// leetcode
class Solution
{
public:
    int findLargest(vector<int> &nums)
    {

        // sort the array
        sort(nums.begin(), nums.end());

        // return the last element
        return nums[nums.size() - 1];
    }
};

// optimal solution
int largestElement(int arr[], int n)
{
    int largest = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}

int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // calling function
    int result = largestElement(arr, n);

    cout << "Largest element is: " << result << endl;
    return 0;
}

// leetcode
#include <bits/stdc++.h>
int largestElement(vector<int> &arr, int n)
{
    int largest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}
// tc = o(N)