#include<iostream>
#define ll long long

using namespace std;

int main()
{
    ll k,n,w;
    cin>>k>>n>>w;

    ll cost;
    cost = k*w*(w + 1)/2;
    if(cost <= n)
        cout<<0;
    else
        cout<<cost - n;
    return 0;
}
