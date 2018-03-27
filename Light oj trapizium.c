#include <algorithm>
#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main(){

    double area,a,b,c,d,s,m,h, tri_Area,res;
    int t,i=1;
    cin>>t;
    while(t--){

        cin>>a>>b>>c>>d;

        m=fabs(a-c);

        s=(b+d+m)*0.5;

        tri_Area=sqrt(s*(s-m)*(s-b)*(s-d));
        h = (tri_Area*2)/m;
        res=0.5*(a+c)*h;
       cout<<res;
        printf("Case %d: %.10lf\n",i++,res);

    }

    return 0;
}

