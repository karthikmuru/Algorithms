#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a = 0,temp,c = 0;
    for(int i = 0;i < n;i++)
    {
        a = 0;
        for(int j = 0;j < 3;j++)
        {
            cin>>temp;
            a = a + temp;
        }
        if(a>=2)
            c++;

    }
    cout<<c;

}
