#include<iostream>
#include<algorithm>
using namespace std;

int *a,*dp,n;
int f(int index,int rest,int prev)
{
    int m;
    if(index == n)
        return rest;
    if(index == 0)
    {
        if(a[index] == 0)
        {
            rest++;
            return f(index+1,rest,0);
        }
        else if(a[index] == 1)
           return f(index+1,rest,1);

        else if(a[index] == 2)
            return  f(index+1,rest,-1);

        else if(a[index] == 3)
        {
            m = min(f(index+1,rest,1),f(index+1,rest,-1));
            return m;
        }
    }
    else
    {   //0
        if(a[index] == 0)
        {
            rest++;
            return f(index+1,rest,0);
        }
        //1
        if(a[index] == 1 && prev != 1)
           return f(index+1,rest,1);
        else if(a[index] == 1 && prev == 1)
        {
            rest++;
            return f(index+1,rest,0);
        }
        //2
        if(a[index] == 2 && prev != -1)
           return f(index+1,rest,-1);
        else if(a[index] == 2 && prev == -1)
        {
            rest++;
            return f(index+1,rest,0);
        }
        //3
        if(a[index] == 3 && prev == 1)
           return f(index+1,rest,-1);
        else if(a[index] == 3 && prev == -1)
            return f(index+1,rest,1);
        else if(a[index] == 3 && prev == 0)
        {
            if(index == n-1)
                return rest;
            else
            {
                if(a[index+1] == 1)
                    return f(index+1,rest,-1);
                else if(a[index+1] == 2)
                    return f(index+1,rest,1);
                else if(a[index+1] == 0)
                    return f(index+1,rest,1);
                else
                    return min(f(index+1,rest,1),f(index+1,rest,0));
            }

        }

    }

}
int main()
{

    cin>>n;
    a = new int[n];
    dp = new int[n];
    for(int i = 0;i<n;i++)
    {
         cin>>a[i];
         //dp[i] = 0;
    }
    /*dp[0] = a[0];
    for(int i = 1;i<n;i++)
    {
        dp[i] = dp[i]^a[i-1];
    }
    for(int i = 0;i<n;i++)
        cout<<dp[i]<<" ";*/
    //cout<<days;
    cout<<f(0,0,0);
}
