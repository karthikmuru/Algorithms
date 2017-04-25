#include<iostream>
#define ll long long
using namespace std;

int main()
{
    ll n,m,a;
    cin>>n>>m>>a;

    ll x,y;
    x = n/a;
    y = m/a;

    if(n%a > 0)
        x++;
    if(m%a > 0)
        y++;

    cout<<x*y;
    return 0;
}
