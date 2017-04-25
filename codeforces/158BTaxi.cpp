#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
    long n,g,taxi = 0;
    cin>>n;

    long c[4];
    memset(c,0,sizeof(long)*4);
    while(n--)
    {
        cin>>g;
        c[g - 1]++;
    }
    //4
    taxi += c[3];
    c[3] = 0;
    //cout<<c[0]<<" "<<c[1]<<" "<<c[2]<<" "<<c[3]<<endl;
    //1 3
    long m = min(c[0],c[2]);
    taxi += m;
    c[0] -= m;
    c[2] -= m;

    if(c[2] != 0)
    {
        taxi += c[2];
        c[2] = 0;
    }

    /*cout<<taxi<<endl;
    cout<<c[0]<<" "<<c[1]<<" "<<c[2]<<" "<<c[3]<<endl;*/
    taxi += c[1]/2;
    c[1] = c[1]%2;
    /*cout<<taxi<<endl;
    cout<<c[0]<<" "<<c[1]<<" "<<c[2]<<" "<<c[3]<<endl;*/
    //1
    taxi += c[0]/4;
    c[0] =c[0]%4;
    /*cout<<taxi<<endl;
    cout<<c[0]<<" "<<c[1]<<" "<<c[2]<<" "<<c[3]<<endl;*/
    //1 2
    if(c[1] > 0)
    {
        taxi++;
        c[1] = 0;
        if(c[0]>=2)
            c[0]-=2;
        else
            c[0] = 0;
    }
    if(c[0] >= 1)
    {
        taxi++;
    }

    //cout<<c[0]<<" "<<c[1]<<" "<<c[2]<<" "<<c[3]<<endl;
    cout<<taxi;
    return 0;
}
