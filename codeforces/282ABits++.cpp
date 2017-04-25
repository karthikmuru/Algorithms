#include<iostream>
using namespace std;

int main()
{
    int n,val = 0,flag;
    cin>>n;
    char exp;
    while(n--)
    {
        flag = 1;
        for(int i = 0;i<3;i++)
        {
            cin>>exp;
            if(exp == '+' &&flag == 1)
            {
                val++;
                flag = 0;
            }
            else if(exp == '-' &&flag == 1)
            {
                val--;
                flag = 0;
            }
        }


    }
    cout<<val;
}
