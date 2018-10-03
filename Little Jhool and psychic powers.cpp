#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int cnt=1,flag=0;
    for(int i=1; i<s.length(); i++)
    {
        if(s[i]==s[i-1])
            cnt++;
        else
            cnt=1;
        if(cnt==6)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        cout<<"Good luck!";
    else
        cout<<"Sorry, sorry!";
    return 0;
}
