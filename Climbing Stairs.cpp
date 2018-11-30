#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,n,cnt=0,sum=0;
    cin>>a>>b>>n;
    while(1)
    {
        sum+=a;
        cnt++;
        if(sum>=n)
        {
            cout<<cnt<<endl;
            break;
        }
        sum=sum-b;
    }
    return 0;
}
