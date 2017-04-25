#include<iostream>

using namespace std;

int main()
{
    int n,t,j;
    cin>>n>>t;

    string q;
    cin>>q;

    for(int i = 0;i<t ;i++)
    {
        for(int j = 0;j<q.length() - 1;j++)
        {
            if(q[j] == 'B' && q[j + 1] == 'G')
            {
                q[j] = 'G';
                q[j + 1] = 'B';
                j++;
            }

        }
    }

    cout<<q;
    return 0;
}
