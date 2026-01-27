#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>a = {0,1,2,0,1,2,1,2,0,0,0,1};
    int n = a.size();
    int count0 = 0, count1 = 0, count2 = 0;
    //counting
    for(int i=0; i<n; i++){
        if(a[i]==0) count0++;
        else if(a[i]==1) count1++;
        else count2++;
    }
    //filling it again
    for(int i=0;i<count0;i++) a[i]=0;
    for(int i=count0;i<count0+count1;i++) a[i]=1;
    for(int i=count0+count1;i<n;i++) a[i]=2;
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}