#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    long long int tst,t,num,tp,sum,i;
    cin>>tst;
    for(t=1;t<=tst;t++)
    {
        sum=0;
        cin>>num;
        for(i=0;i<num;i++)
        {
            cin>>tp;
            if(tp>0)
            {
                sum=sum+tp;
            }
        }
        cout<<"Case "<<t<<": "<<sum<<endl;
    }
    return 0;
}
