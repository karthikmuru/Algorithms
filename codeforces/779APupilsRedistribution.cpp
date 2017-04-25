#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
    int n,temp;
    cin>>n;

    int A[5],B[5];

    memset(A,0,sizeof(A));
    memset(B,0,sizeof(B));

    for(int i = 0;i<n;i++)
    {
        cin>>temp;
        A[temp - 1]++;
    }
    for(int i = 0;i<n;i++)
    {
        cin>>temp;
        B[temp - 1]++;
    }

    int ans = 0;
    for(int i = 0; i<5;i++)
    {
        if((( A[i] + B[i]) %2)!= 0)
            ans = -1;
    }
    if(ans != -1)
    for(int i = 0;i<5;i++)
    {
        ans = ans + abs((A[i] - B[i])/2);
    }

    if(ans!= - 1)
        cout<<ans / 2;
    else
        cout<<ans;
    return 0;
}
