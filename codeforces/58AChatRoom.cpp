#include<iostream>
using namespace std;

int main()
{
    string s,hello;
    hello = "hello";
    int j = 0;
    char t;

    cin>>s;

    for(int i = 0;i < s.length();i++)
    {
        if(j >= 5 )
        {
            cout<<"YES";
            return 0;
        }
        else
        {
            t = hello[j];
            if(t == s[i])
            {
                j++;
            }
        }
    }
    if(j >= 5 )
    {
        cout<<"YES";
        return 0;
    }
    cout<<"NO";
    return 0;
}
