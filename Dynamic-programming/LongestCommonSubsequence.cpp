#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;

    int len1,len2;

    len1 = a.length();
    len2 = b.length();

    int dp[len1 + 1][len2 + 1],m = 0;

    memset(dp,0,sizeof(dp));

    for(int i = 1;i <= len1 ;i++)
    {

        for(int j = 1;j<=len2;j++)
        {
            if(a[i - 1] == b[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                m = max(m,dp[i][j]);
            }
        }
    }

    cout<<m;
    return 0;
}
