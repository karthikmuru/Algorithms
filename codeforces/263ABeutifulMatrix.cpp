#include<iostream>
#include<algorithm>
using namespace std;

int main()
{

    int a;
    int ans = 0;
    for(int i = 0;i<5;i++)
    {
        for(int j = 0;j<5;j++)
        {
            cin>>a;
            if(a == 1)
            {
                ans = abs(2 - i) + abs(2 - j);
            }
        }
    }

    cout<<ans;
    return 0;

}
