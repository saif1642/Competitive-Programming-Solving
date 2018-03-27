#include <iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    int t,x,y;
    long long int ans,n;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        n=y-x;
        ans=(n*(n+1))/2;

        cout<<ans<<endl;
    }
    return 0;
}
