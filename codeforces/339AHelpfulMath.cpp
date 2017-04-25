#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> op;

    string in;
    cin>>in;

    for(int i = 0;i<in.length();i++)
    {
        if(in[i] != '+')
            op.push_back(in[i] - '0');
    }

    sort(op.begin(),op.end());
    cout<<op[0];
    for(int i = 1;i<op.size();i++)
        cout<<"+"<<op[i];

    return 0;
}
