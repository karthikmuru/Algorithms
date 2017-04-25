#include<iostream>
using namespace std;

int main()
{
    long n,k;
    cin>>n>>k;
    long a[n];
    for(int i = 0;i<n;i++)
        cin>>a[i];
    long c = 0;

    for(int i = 1;i<n;i++)
    {
        if((k - a[i-1] - a[i]) > 0 )
        {
            //cout<<k - a[i-1] - a[i];
            c  = c + (k - a[i - 1] - a[i]);
            a[i] = k - a[i - 1];
        }
    }
    cout<<c<<"\n";
    for(int i = 0;i<n;i++)
        cout<<a[i]<<" ";

    return 0;
}
