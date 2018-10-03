#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int l,r,k,cnt=0;
    cin>>l>>r>>k;
    for(int i=l;i<=r;i++)
    {
        if(i%k==0)
            cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
