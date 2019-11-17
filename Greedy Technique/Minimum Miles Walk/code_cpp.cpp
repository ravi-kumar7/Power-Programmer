//No Code Yet
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //Write your code here
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    long long miles=0;
    sort(arr,arr+n,greater<int>());
    for(int i=0;i<n;i++)
    {
        miles+=arr[i]*pow(2,i);// (1<<i);
    }
    cout<<miles;
    return 0;
}