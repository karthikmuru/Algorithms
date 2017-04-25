#include<iostream>
using namespace std;

int main()
{
    int n;
    int p,q;
    int ans = 0;

    cin>>n;
    while(n--)
    {
        cin>>p>>q;
        if((q - p)>=2)
            ans++;
    }
    cout<<ans;
    return 0;

}
