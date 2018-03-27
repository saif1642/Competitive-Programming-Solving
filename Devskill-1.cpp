#include<stdio.h>
#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int cx,cy,px,py;
    double r;
    int t,i=1;
    cin>>t;
    while(t--){

        cin>>cx>>cy>>r>>px>>py;

        double l1=sqrt(pow((cx-px),2)+pow((cy-py),2));

        if(l1==r)
            printf("Case %d: OnCircle\n",i);

        else if(l1>r)
            printf("Case %d: Outside\n",i);
        else
            printf("Case %d: Inside\n",i);

        i++;

    }
}
