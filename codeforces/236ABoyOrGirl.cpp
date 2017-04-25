#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<char> letters;
    string s;
    cin>>s;

    for(int i = 0;i<s.length();i++)
        letters.insert(s[i]);

    if(letters.size()%2 == 0)
        cout<<"CHAT WITH HER!";
    else
        cout<<"IGNORE HIM!";
    return 0;
}
