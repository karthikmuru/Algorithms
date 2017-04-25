#include<iostream>
using namespace std;

int main()
{
    string a;
    cin>>a;
    for(int i = 0;i<a.length();i++)
    {
        if(a[i]!=65 && a[i]!=97 && a[i]!=79 && a[i]!=111 && a[i]!=89 && a[i]!=121 && a[i]!=69 && a[i]!= 101 && a[i]!=85 &&a[i]!=117 && a[i]!=73 && a[i]!=105)
        {
            cout<<".";
            if(a[i]>64 && a[i]<96)
            {
                cout<<char(a[i] + 32);
            }
            else
                cout<<a[i];
        }

    }

}
