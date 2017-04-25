#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n],ones[n + 1],zero[n + 1];

    memset(ones,0,sizeof(ones));
    memset(zero,0,sizeof(zero));


    for(int i = 1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i] == 1)
        {
            ones[i] = ones[i - 1] + 1;
            zero[i] = zero[i - 1];
        }

        else
        {
            zero[i] = zero[i - 1] + 1;
            ones[i] = ones[i - 1];
        }
    }
    /*for(int i = 0;i<=n;i++)
    {
        cout<<ones[i]<<" ";
    }
    cout<<endl;
    for(int i = 0;i<=n;i++)
    {
        cout<<zero[i]<<" ";
    }*/
    int ans = 0;
    for(int i = 0;i<n;i++)
    {
        for(int j = i;j<n;j++)
        {
            ans = max(ans,ones[n] - (ones[j + 1] - ones[i]) + (zero[j + 1] - zero[i]));

        }
    }

    cout<<ans;

    return 0;
}
