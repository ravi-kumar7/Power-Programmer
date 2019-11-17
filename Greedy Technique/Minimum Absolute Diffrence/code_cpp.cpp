// arr - input array
// n - size of array
#include<algorithm>

int minAbsoluteDiff(int arr[], int n) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    std::sort(arr,arr+n);
    int mindiff=arr[n-1]-arr[0];
    int prev=arr[0];
    for(int i=1;i<n;i++){
        int diff=abs(arr[i]-prev);
        if(diff<mindiff)
            mindiff=diff;
        prev=arr[i];
    }
    return mindiff;
}
