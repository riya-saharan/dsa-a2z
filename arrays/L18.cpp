// left rotate an array by one place
#include <bits/stdc++.h> //this includes all the standard C++ libraries (vector,iostream,algorithm etc.)
using namespace std;
vector<int> rotateArray(vector<int> &arr)
{

    int temp = arr[0]; // saves the first element of the array
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i]; // this moves each element one position left
    }
    arr[n - 1] = temp;
    return arr;
}
// in algorithm using O(N) space but extra space using is O(1)
// left rotate the array by d places
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void leftRotate(int arr[], int n, int d)
{
    d = d % n;

    int temp[d];
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }

    for (int i = d; i < n; i++)
    {
        arr[i - d] = arr[i];
    }

    for (int i = n - d; i < n; i++)
    {
        arr[i] = temp[i - (n - d)];
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) // input array elements
    {
        cin >> arr[i];
    }

    int d;
    cin >> d;
    leftRotate(arr, n, d);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    n return 0;
}
// optimal approach
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void leftRotate(int arr[], int n, int d)
{
    reverse(arr, arr + d);
    reverse(arr + d, arr + n);
    reverse(arr, arr + n);
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int d;
    cin >> d;
    leftRotate(arr, n, d);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

// leetcode
class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        int d;
        int n = nums.size();
        d = k % n;
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + d);
        reverse(nums.begin() + d, nums.end());
    }
};

// move all zeros to the end of an array
vector<int> moveZeros(int n, vector<int> a)
{
    // vector is a dynamic array in C++ which is storing integers(array of integers), also this means the function will return a vector of integers, moveZeros is function name, and inside the brackets are the parameters first is size of the array , next is array of integers , a is name of array

    vector<int> temp;
    // creating a new array of integers and its name is temp to store all non zero elements in it
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            temp.push_back(a[i]);
        }
    }

    int nz = temp.size();
    for (int i = 0; i < nz; i++)
    {
        a[i] = temp[i];
    }

    for (int i = nz; i < n; i++)
    {
        a[i] = 0;
    }

    return 0;
}

// union of two sorted arrays using set
vector<int> findUnion(int arr1[], int arr2[], int n, int m)
{
    set<int> s;
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        s.insert(arr1[i]);
    }

    for (int i = 0; i < m; i++)
    {
        s.insert(arr2[i]);
    }

    for (auto it : s)
    {
        ans.push_back(it);
    }

    return ans;
}

// union of two sorted arrays
vector<int> sortedArray(vector<int> a, vector<int> b)
{
    int n1 = a.size();
    int n2 = b.size();
    int i = 0;
    int j = 0;
    vector<int> unionArr;
    while (i < n1 && i < n2)
    {
        if (a[i] < b[j])
        {
            ``if (unionArr.size() == 0 || unionArr.back() != a[i])
            {
                unionArr.push_back(a[i]);
            }
            i++;
        }
        else
        {
            ``if (unionArr.size() == 0 || unionArr.back() != b[j])
            {
                unionArr.push_back(b[j]);
            }
            j++;
        }
    }

    while (j < n2)
    {
        if (unionArr.size() == 0 || unionArr.back() != b[j])
        {
            unionArr.push_back(b[j]);
        }
        j++;
    }

    while (i < n2)
    {
        if (unionArr.size() == 0 || unionArr.back() != a[i])
        {
            unionArr.push_back(a[i]);
        }
        i++;
    }
    return unionArr;
}

// intersection of two sorted arrays
class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        set<int> st;
        for (int i = 0; i < nums1.size(); i++)
        {
            for (int j = 0; j < nums2.size(); j++)
            {
                if (nums1[i] == nums2[j])
                {
                    st.insert(nums1[i]);
                }
            }
        }
        vector<int> ans(st.begin(), st.end());
        return ans;
    }
};

// Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must appear as many times as it shows in both arrays and you may return the result in any order.
class Solution
{
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {

        vector<int> ans;
        vector<int> vis(nums2.size(), 0); // creates a visited array of the same size as nums2

        for (int i = 0; i < nums1.size(); i++)
        {
            for (int j = 0; j < nums2.size(); j++)
            {

                if (nums1[i] == nums2[j] && vis[j] == 0)
                { // elements in nums2 must not have been used before
                    ans.push_back(nums1[i]);
                    vis[j] = 1;
                    break;
                }
            }
        }
        return ans;
    }
};
