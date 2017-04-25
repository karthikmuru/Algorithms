#include<iostream>
using namespace std;

int isLucky(int n)
{
    int d;
    while(n!=0)
    {
        d = n%10;
        if(d != 7 && d != 4)
            return 0;

        n = n/10;
    }

    return 1;

}
int main()
{
    int n;
    cin>>n;

    for(int i = 4;i<=n;i++)
    {
        if(isLucky(i))
        {
            if(n%i == 0)
            {
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
    return 0;
}
