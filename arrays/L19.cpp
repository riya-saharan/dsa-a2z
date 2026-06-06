// missing number
// brute force approach
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    for (int i = 1; i <= N; i++)
    {             // assuming the numbers are from 1 to N
        flag = 0; // flag to check if the number is present in the array
        for (int j = 0; j < N - 1; j++)
        {
            if (a[j] == i) // if the number is present in the array, set the flag to 1 and break the loop
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0) // if the flag is still 0, it means the number is missing in the array, so we print it
        {
            cout << i << endl;
        }
    }
}

// better approach using hash fuction
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int hash[n + 1] = {0}; // create a hash array of size n+1 and initialize all elements to 0
    // why n+1? because we are assuming the numbers are from 1 to N, so we need an extra space to mark the presence of the number N
    for (int i = 0; i < n - 1; i++)
    {
        hash[a[i]] = 1; // mark the presence of each number in the input array
    }
    for (int i = 1; i <= n; i++)
    {
        if (hash[i] == 0)
        {
            cout << i << endl;
        }
    }
}
// optimal using sum formula
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        sum += a[i]; // calculate the sum of all elements in the input array
    }
    int totalSum = n * (n + 1) / 2;     // calculate the total sum of numbers from 1 to N using the formula n(n+1)/2
    int missingNumber = totalSum - sum; // the missing number will be the difference between the total sum and the sum of the input array
    cout << missingNumber << endl;
}

// using xor operator
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int xor1 = 0;
    for (int i = 0; i < n - 1; i++)
    {
        xor1 ^= a[i]; // calculate the xor of all elements in the input array
    }
    for (int i = 1; i <= n; i++)
    {
        xor1 ^= i; // calculate the xor of all numbers from 1 to N
    }
    cout << xor1 << endl; // the missing number will be the result of the xor operation
}

// maximum consecutive ones
class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int maxi = 0;
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 1)
            {
                count++;
                maxi = max(maxi, count);
            }
            else
            {
                count = 0;
            }
        }
        return maxi;
    }
};

// find element that appears once
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            ans ^= nums[i]; // the element that appears once will be the result of the xor operation
        }
        return ans;
    }
};

// find the number that appears once in an array where the others twice
//  brute force approach
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    for (int i = 0; i < n; i++) // linear search for each element in the array
    {
        int count = 0;
        for (int j = 0; j < n; j++) // count the number of times the element appears in the array
        {
            if (a[i] == a[j]) // if the element is found in the array, increment the count
            {
                count++;
            }
        }
        if (count == 1) // if the count is 1, it means the element appears only once in the array, so we print it and break the loop
        {
            cout << a[i] << endl;
            break;
        }
    }
}

// better approach using hash function
maxi = arr[0];
for (int i = 0; i < n; i++)
{
    maxi = max(maxi, arr[i]);
    hash[maxi] = 0;
}
for (int i = 0; i < n; i++)
{
    hash[arr[i]]++; // mark the frequency of each element in the input array
}
for (int i = 0; i <= maxi; i++)
{
    if (hash[i] == 1) // if the frequency of the element is 1, it means it appears only once in the array, so we print it and break the loop
    {
        cout << i << endl;
        break;
    }
}
// time complexity is 3O(N) and space complexity is O(maxi) where maxi is the maximum element in the input array
// if element that appears once is at the last than it has to iterate 7 times to find it
// if array has very large element then it will take a lot of space to create the hash array so hashing cannot be used here, use map than
// for ordered map time complexity is O(NlogN) and for unordered map time complexity is O(N) and space complexity is O(N)

for (int i = 0; i < n; i++)
{
    mpp[arr[i]]++; // mark the frequency of each element in the input array using map
}
for (auto it : mpp)
{
    if (it.second == 1)
    { // if the frequency of the element is 1, it means it appears only once in the array, so we print it and break the loop
        cout << it.first << endl;
        break;
    }
}
