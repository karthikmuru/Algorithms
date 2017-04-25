#include<iostream>
using namespace std;

int main()
{
    string in;
    cin>>in;

    int flag = 1;
    for(int i = 1;i<in.length();i++)
    {
        if(in[i]>91)
            flag = 0;
    }
    if(flag)
    {
        for(int i = 0;i<in.length();i++)
        {
            if(in[i]<91)
                in[i] += 32;
            else
                in[i] -= 32;

        }
    }


    cout<<in;
    return 0;
}
