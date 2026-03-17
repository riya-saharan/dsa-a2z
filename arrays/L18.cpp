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

//move all zeros to the end of an array
vector<int> moveZeros(int n, vector<int> a) {
// vector is a dynamic array in C++ which is storing integers(array of integers), also this means the function will return a vector of integers, moveZeros is function name, and inside the brackets are the parameters first is size of the array , next is array of integers , a is name of array

vector<int> temp;
// creating a new array of integers and its name is temp to store all non zero elements in it 
    for(int i = 0; i<n; i++) {
        if(a[i] != 0) {
            temp.push_back(a[i]);
        }
    }

    int nz = temp.size();
    for(int i = 0;i<nz;i++) {
        a[i] = temp[i];
    }

    for(int i = nz;i<n;i++) {
        a[i] = 0;
    }

    return 0;

}