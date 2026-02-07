#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int Long_MIN;

    //initialization
    long long sum = 0, 
    long long maxi = Long_MIN;
    int start = 0;  //temporary start
    int ansStart = -1;  //final start
    int ansEnd = -1;  //final end

    for(int i = 0; i<n; i++){
        //if starting fresh, mark new start
        if(sum == 0) {
            start = i;
        }

        sum += arr[i];

        //if better sum found, update answer indexes
        if(sum > maxi){
            maxi = sum;
            ansStart = start;
            ansEnd = i;
        }

        //if sum becomes -ve, reset it
        if(sum < 0){
            // then initialize sum to 0
            sum = 0;
        }
    }

    cout << "Maximum Sum = " << maxi << endl;
    cout << "Subarray with maximum sum: ";

    for(int i = ansStart; i <= ansEnd; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
