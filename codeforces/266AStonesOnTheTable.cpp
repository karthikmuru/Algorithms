#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    string stones;

    cin>>n>>stones;

    int c = 0,ans = 0;
    for(int i = 0;i<n - 1;i++)
    {
        if(stones[i] == stones[i + 1])
             c++;
        else
        {
            ans +=c;
            c = 0;
        }
    }
    ans += c;
    cout<<ans;
    return 0;
}
