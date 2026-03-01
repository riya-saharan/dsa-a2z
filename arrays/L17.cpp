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
