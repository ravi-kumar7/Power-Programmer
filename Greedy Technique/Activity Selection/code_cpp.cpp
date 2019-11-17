#include <bits/stdc++.h>
using namespace std;
// A job has start time, finish time and profit.
struct Activitiy
{
int start, finish;
};
Activitiy arr[1000000];
// A utility function that is used for sorting
// activities according to finish time
bool activityCompare(Activitiy s1, Activitiy s2)
{
return (s1.finish < s2.finish);
}
// Returns count of maximum set of activities that can
// be done by a single person, one at a time.
int printMaxActivities(Activitiy arr[], int n)
{
// Sort jobs according to finish time
sort(arr, arr+n, activityCompare);
// The first activity always gets selected
int i = 0;
//cout << "(" << arr[i].start << ", " << arr[i].finish << "), ";
int count=1;
// Consider rest of the activities
for (int j = 1; j < n; j++)
{
// If this activity has start time greater than or
// equal to the finish time of previously selected
// activity, then select it
if (arr[j].start >= arr[i].finish)
{
//cout << "(" << arr[j].start << ", "<< arr[j].finish << "), ";
i = j;
count++;
}
}
return count;
}
// Driver program
int main()
{
int n;
cin>>n;
for(int i=0; i<n; i++)
{
cin>>arr[i].start;
cin>>arr[i].finish;
}
cout<<printMaxActivities(arr,n);
return 0;
}