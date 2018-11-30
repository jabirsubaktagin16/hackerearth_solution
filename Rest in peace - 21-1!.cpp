#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,flag;
    long long n;
    cin>>T;
    while(T--)
    {
        cin>>n;
        flag=0;
        if(n%21==0)
        {
            cout<<"The streak is broken!"<<endl;
            flag=1;
        }
        else{
            int tmp=n;
            while(tmp!=0)
            {
                if(tmp%100==21)
                {
                    cout<<"The streak is broken!"<<endl;
                    flag=1;
                    break;
                }
                else
                    tmp/=10;
            }
        }
        if(flag==0)
            cout<<"The streak lives still in our heart!"<<endl;
    }
    return 0;
}
