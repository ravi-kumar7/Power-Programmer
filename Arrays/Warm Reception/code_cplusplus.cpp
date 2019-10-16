#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int maxChairs(int arr[],int dept[],int n)
{
    sort(arr,arr+n);
    sort(dept,dept+n);
    int chairNeeded=1,counter=1;
    int i=1,j=0;
    while(i<n && j<n){
        if(arr[i]<=dept[j])
        {
            counter++;
            i++;
        }
        else
        {
            counter--;
            j++;
        }
        if(counter>chairNeeded)
            chairNeeded=counter;
    }
    return chairNeeded;
}

int main() {

	// Write your code here
    int n;
    cin>>n;
    int arrv[n];
    int dept[n];
    int i=0;
    for(;i<n;i++)
        cin>>arrv[i];
    i=0;
    for(;i<n;i++)
        cin>>dept[i];
    cout<<maxChairs(arrv,dept,n);
}