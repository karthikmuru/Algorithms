#include<iostream>

using namespace std;

int main()
{
    double ans;
    int n,sum = 0,temp;
    cin>>n;

    for(int i = 0;i<n;i++)
    {
        cin>>temp;
        sum = sum + temp;
    }

    ans = (double)sum/n;
    cout<<ans;
    return 0;

}
