#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int cnt=0;
        string st;
        cin>>st;
        for(int i=0;i<st.length();i++)
        {
            if(st[i]=='a'||st[i]=='A'||st[i]=='e'||st[i]=='E'||
               st[i]=='i'||st[i]=='I'||st[i]=='o'||st[i]=='O'||
               st[i]=='u'||st[i]=='U')
                cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
