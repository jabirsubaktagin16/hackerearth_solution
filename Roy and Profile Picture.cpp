#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int L,N,W,H;
    cin>>L;
    cin>>N;
    while(N--)
    {
        cin>>W>>H;
        if(W<L||H<L)
            cout<<"UPLOAD ANOTHER"<<endl;
        else if((W==L && H==L)||W==H)
            cout<<"ACCEPTED"<<endl;
        else
            cout<<"CROP IT"<<endl;
    }
    return 0;
}
