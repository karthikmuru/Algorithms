#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long n,*a,*dp;
    cin>>n;
    a = new long long [n];
    dp = new long long [n];
    for(long long i = 0;i<n;i++)
    {
        cin>>a[i];
        dp[i] = 1;
    }
    for(int i = 1;i<n;i++)
    {
        if(a[i-1]<a[i])
        {
            dp[i] = max(dp[i],dp[i-1] + 1);
        }
    }
    cout<<*max_element(dp,dp+n);
}
