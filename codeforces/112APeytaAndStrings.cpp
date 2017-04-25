#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char a[100],b[100];
    cin>>a>>b;

    for(int i = 0;a[i]!='\0';i++)
    {
        if(a[i]>='A' && a[i]<='Z')
            a[i] = a[i] + 32;
    }
    for(int i = 0;b[i]!='\0';i++)
    {
        if(b[i]>='A' && b[i]<='Z')
            b[i] = b[i] + 32;
    }
    cout<<strcmp(a,b);
}
