#include<iostream>
#include<cstring>
#include<algorithm>
#define ll long long
using namespace std;

int main()
{
    ll n,dp[100000],temp,top = 1;

    memset(dp,0,sizeof(dp));

    cin>>n;
    for(ll i = 0;i<n;i++)
    {
        cin>>temp;
        dp[temp - 1] += temp;
        if(temp>top)
            top = temp;
    }

    ll inc = 0,ex = 0;

    for(ll i = 0;i<top;i++)
    {
        temp = inc;
        inc = max(ex + dp[i],inc);
        ex = temp;
    }

    cout<<inc;

    return 0;
}


