#include<iostream>
#include<math.h>
#include<vector>
#include<cstring>
#define ll long long
using namespace std;

int main()
{
    ll n,k,temp;
    cin>>n>>k;

    vector<int> dig;

    temp = n;

    while(temp!=0)
    {
        dig.push_back(temp%10);
        temp = temp / 10;
    }

    int dp[dig.size()];
    memset(dp,0,sizeof(dp));

    for(int i = 0;i<dig.size();i++)
    {
        if(dig[i] == 0)
            dp[i] = 1;
    }

    int ans = 0,rem = 0;
    for(int i = 0;i<dig.size();i++)
    {
        if(ans == k)
            break;
        else
        {
            if(dp[i] != 0)
            {
                ans++;
            }
            else
                rem++;
        }
    }

    if(ans != k)
        rem = rem + ans - 1;
    if(rem <0)
        rem = 0;
    end:
    cout<<rem;
    return 0;
}
