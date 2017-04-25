#include<iostream>
using namespace std;

int isLucky(int n)
{
    if(n == 4 ||n == 7)
        return 1;
    else
        return 0;
}
int main()
{
    string n;
    cin>>n;

    int ans = 0;
    for(int i = 0;i<n.length();i++)
    {
        if(n[i] == '4' || n[i] == '7')
            ans++;
    }

    if(isLucky(ans) == 1)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
