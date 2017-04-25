
#include<iostream>
using namespace std;

int main()
{
   string exp;
   cin>>exp;

   int len = 1,flag = 0;

   for(int i = 1;i<exp.length();i++)
   {
        if(exp[i] == exp[i - 1])
            len++;
        else
            len = 1;
        if(len>=7)
        {
            flag = 1;
            break;
        }
   }
   if(flag == 1)
        cout<<"YES";
   else
        cout<<"NO";

   return 0;
}
