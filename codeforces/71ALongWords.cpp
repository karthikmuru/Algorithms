#include<iostream>
using namespace std;

int main()
{
    string a;
    int n;
    cin>>n;

    while(n--)
    {
        cin>>a;
        if(a.length()<=10)
            cout<<a;
        else
            cout<<a[0]<<a.length() - 2<<a[a.length() - 1];

        cout<<endl;
    }
    return 0;
}
