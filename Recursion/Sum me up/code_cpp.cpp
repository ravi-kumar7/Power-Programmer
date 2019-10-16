#include<bits/stdc++.h>
using namespace std;

long long find(long long n)
{
    if(n<=0)
        return 0;
    return n%10 + find(n/10);
}

int main() {

    int n;
    cin>>n;
    long long val=0;
    for(int i=0;i<n;i++)
    {
        cin>>val;
        cout<<find(val)<<endl;
    }
}