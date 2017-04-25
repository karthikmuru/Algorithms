#include<iostream>
using namespace std;

int main()
{
    string in;
    cin>>in;

    if(in[0]>91)
        in[0] -= 32;

    cout<<in;
    return 0;
}
