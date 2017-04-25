#include<iostream>
#include<algorithm>
using namespace std;

long  f(int s,int b,long time)
{
    int n;
    if(s == 1 && b == 2 || s == 2 && b == 2)
        return (time+1);
    else if(s == 1 && b == 1)
        return time;
    else
    {
        //cout<<"else";
        if(b%2 == 0)
            n = (b-2)/2;
        else
            n = (b-1)/2;
        s = s + n;
        b = b - 2*n;
        time = time + n;
        //cout<<s<<" "<<b<<" "<<n;
        /*cin.get();
        cin.ignore();*/
        return f(min(s,b),max(s,b),time);
    }
}
int main()
{
    int a1,a2;
    cin>>a1>>a2;
    int s = min(a1,a2);
    int b = max(a1,a2);
    //cout<<s<<b;
    cout<<f(s,b,0);
    return 0;
}
