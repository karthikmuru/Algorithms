#include<iostream>
using namespace std;

int main()
{
    long long n = 1,k,r,ones;
    cin>>k>>r;
    ones = k%10;
    k = ones;
    while(true)
    {
        if(k == 0 || k == r)
        {
            break;
        }
        k = (k + ones)%10;
        n++;

    }
    cout<<n;
    return 0;
}
