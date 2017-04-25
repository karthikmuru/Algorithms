#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    long long n,c;
    cin>>n>>c;
    long long a[n];
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
    }
    long cw = 1;
    for(int i = 1;i<n;i++)
    {
        if(a[i] - a[i-1] > c)
            cw = 1;
        else
            cw++;
    }
    cout<<cw;
    return 0;
}
