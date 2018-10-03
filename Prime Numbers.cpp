#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    for(long long i=2; i<=n; i++)
    {
        int flag=0;
        for(long long j=2; j*j<=i; ++j)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if (flag==0)
            cout<<i<<" ";
    }
    return 0;
}
