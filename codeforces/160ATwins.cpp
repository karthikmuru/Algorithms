#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int T,x,i;
    int sum = 0,total = 0;
    cin>>T;
    vector<int> coins;

    for(int i = 0;i<T;i++)
    {
        cin>>x;
        total += x;
        coins.push_back(x);
    }
    sort(coins.begin(),coins.end());


    for(i = T - 1;i>=0;i--)
    {
        sum = sum + coins[i];
        if(sum > (total - sum))
            break;
    }

    cout<<T - i;
    return 0;
}

