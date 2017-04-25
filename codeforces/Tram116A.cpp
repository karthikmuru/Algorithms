#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int T;
    cin>>T;

    int a,b,m = 0,p = 0;
    while(T--)
    {
        cin>>a>>b;
        p = p + b - a;
        m = max(m,p);
    }
    //m = max(m,p);
    cout<<m;
    return 0;
}
