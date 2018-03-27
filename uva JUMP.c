#include<iostream>
#include<cmath>

using namespace std;
int main()
{
    float l,d,h,v,D,H,t;
    int T;
    cin>>T;
    while(T--)
    {
        cin>>l>>d>>h>>v;
        H=h/1000;
        t=sqrt((2*H)/9.81);
        d=t*v;
       if((D>=(d-500) && D<=(d+500))||(D>=(d+l-500)&& D<=(d+l+500)))
          cout<<"EDGE"<<endl;
       else if(D>=(d+500)&& D<=(d+l-500))
          cout<<"POOL"<<endl;
       else
          cout<<"FLOOR"<<endl;

    }
    return 0;
}
