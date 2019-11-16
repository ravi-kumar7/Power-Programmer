#include <bits/stdc++.h>
using namespace std;
int main(){
int n,i;
cin>>n>>i;
//turn on the ith bit
n=n|(1<<i);
// unset ith bit
n=n&~(1<<i);
//flip the ith bit
n=n^(1<<i);
//check odd or even
if(n&1==0)
	cout<<"EVEN";
else
	cout<<"ODD";
//check if n is power of 2
if(n&(n-1)==0)
	cout<<"EVEN";
else
	cout<<"ODD";
//clear all bits from LSB till i
n=n&(~((1<<(i+1))-1))
//clear all bits from MSB till i
n&(1<<(i))-1;
}