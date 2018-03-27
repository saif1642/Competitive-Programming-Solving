#include<iostream>
#include<cmath>

using namespace std;
int main()
{
    double l,d,h,v,D,H,t;
    int T;
    cin>>T;
    while(T--)
    {
        cin>>l>>d>>h>>v;
        h=h/1000;
        l=l/ 1000;
		d=d/1000;
		v=v/1000;
        t=sqrt((2*h)/9.8);
        D=t*v;
       if (fabs(D - d) < 0.5 || fabs(D - (d + l)) < 0.5)
          cout<<"EDGE"<<endl;
       else if (D < d || D > d + l)
          cout<<"FLOOR"<<endl;
       else

          cout<<"POOL"<<endl;

    }
    return 0;
}
