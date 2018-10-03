#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i;
    long long int sum1 = 0, sum2 = 0, sum3 = 0;
    long int num[100000];
    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>num[i];
    }

    for(i=0; i<n; i=i+3)
    {
        if(i<n)
            sum1 += num[i];
        if(i+1<n)
            sum2 += num[i+1];
        if(i+2<n)
            sum3 += num[i+2];
    }
    cout<<sum1<<" "<<sum2<<" "<<sum3<<endl;
    return 0;
}
