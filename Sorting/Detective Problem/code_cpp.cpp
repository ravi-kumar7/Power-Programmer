#include <bits/stdc++.h>
using namespace std;
//the solution present on the site is nicelly coded
//one can also code the solution as provided
//However it is not as appreciable as already provided
#define ll long long
ll minihelper(int*arr1,int size1,int*arr2,int size2){
int curmaxindex=size1;
ll curans=0,finalans=0;
for(int i=0;i<size1;i++){
if(arr1[i]>=arr2[0]){
curmaxindex=i;
break;
}
else{
curans+=arr1[i];
}
}
finalans=curans;
for(int i=1;i<size2;i++){
ll localcurans=curans;
while(arr2[i]>arr1[curmaxindex]&&curmaxindex<size1){
localcurans+=arr1[curmaxindex];
curmaxindex++;
}
curans=localcurans;
finalans+=localcurans;
}
return finalans;
}
ll helper(int* arr,int si,int ei){
if(si>=ei){
return 0;
}
int mid=(si+ei)/2;
int*arr1=new int [mid-si+1];
int*arr2=new int [ei-mid];
for(int i=si,k=0;i<=mid;i++,k++){
arr1[k]=arr[i];
delete [] arr2;
ans+=helper(arr,si,mid) + helper(arr,mid+1,ei);
return ans;
}
int main(){
int T;
cin>>T;
while(T--){
int n;
cin>>n;
int*arr=new int [n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
cout<<helper(arr,0,n-1)<<endl;
}
}