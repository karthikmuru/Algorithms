#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;

int main()
{
    string s;
    long long c = 0;
    getline(cin,s);
    for(long i = 0;i<s.length();i++)
    {
        if((s[i] - 48)%4 == 0)
            c++;
    }
    long num = 0;
    for(long i = 0;i<s.length()-1;i++)
    {
        num = (s[i]-48)*10 + (s[i + 1] -48);
        if(num%4 == 0)
            c = c + i + 1;
    }
    cout<<c;
    return 0;

}
