#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,arr[100005];
    long long int ans=1;
    int modulo=pow(10,9)+7;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        ans=(ans*arr[i])%modulo;
    }
    cout<<ans<<endl;
    return 0;
}
