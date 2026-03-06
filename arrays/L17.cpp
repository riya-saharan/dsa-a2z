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

// find second largest element
// brute force solution
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 4, 7, 7, 5};
    int n = 6;

    int largest = arr[0];
    int secondLargest = -1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != largest && arr[i] > secondLargest)
        {
            secondLargest = arr[i];
        }
    }

    cout << "Second Largest: " << secondLargest;
}
// time complexity sorting takes = O(nlog n) ,2 loops = O(2n) ignore 2 TC = O(N)
// it scans the array twice
// better solution
// maintain two variables .largest .secondlargest .update both in one travesal
// time complexity is same O(N) but better is preferred
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 4, 7, 7, 5};
    int n = 6;

    int largest = arr[0];
    int secondLargest = -1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > secondLargest)
        {
            secondLargest = arr[i];
        }
    }

    cout << "Second Largest: " << secondLargest;

    return 0;
}

// optimal solution

int secondLargest(vector<int> &a, int n)
{
    int largest = a[0];
    int slargest = -1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] > largest)
        {
            slargest = largest;
            largest = a[i];
        }
        else if (a[i] < largest && a[i] > slargest)
        {
            slargest = a[i];
        }
    }
    return slargest;
}

int secondSmallest(vector<int> &a, int n)
{
    int smallest = a[0];
    int ssmallest = INT_MAX;
    // if finding smallest values we should initialize the variable with a very large number
    for (int i = 1; i < n; i++)
    {
        if (a[i] < smallest)
        {
            ssmallest = smallest;
            smallest = a[i];
        }
        else if (a[i] != smallest && a[i] < ssmallest)
        {
            ssmallest = a[i];
        }
    }
    return ssmallest;
}
vector<int> getSecondOrderElements(int n, vector<int> a)
{
    // vector<int> is return type means the function will return a vector(array-like structure) of integers.
    // getSecondOrderElements is the function name
    //  and in the brackets are the parameters(inputs) int n is size of array and vector<int> a is the actual array
    int slargest = secondLargest(a, n);
    // this calls another function secondLargest(n, a)
    // finds the second largest element, returns it, stores it inside sLargest
    int ssmallest = secondSmallest(a, n);
    return {slargest, ssmallest};
    // curly braces{}  this is called Initializer List in C++
    // this creates and returns a vector
    // equivalent to writing
    // vector<int> result;
    // result.push_back(sLargest);
    // result.push_back(sSmallest);
    // return result;
    //  this whole code - create an empty vector, insert first element, insert second element, and return it.
}

// checking if the array is sorted and in non decending order
int isSorted(int n, vector<int> a)
{
    for (int i = 1; i < n; i++)
    {
        if (a[i] >= a[i - 1])
        {
        }
        else
        {
            return false;
        }
    }
    return true;
}

// remove duplicates in-place from sorted array
// leetcode solution
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int i = 0; // first unique element
        for (int j = 1; j < nums.size(); j++)
        {
            if (nums[j] != nums[i])
            {                          // unique element found
                nums[i + 1] = nums[j]; // replace, goes to front position
                i++;
            }
        }
        return i + 1;
    }
};
// TC = O(N)