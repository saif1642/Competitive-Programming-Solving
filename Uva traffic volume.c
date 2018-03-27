#include<math.h>
#include<stdio.h>
int main()
{
    double v,vol;
    int l,f;
    while(1)
    {
       scanf("%d %d",&l,&f);
       if(l==0&& f==0)
            break;
       v=sqrt(l*f*2.0);
       vol=(v*3600.0)/(2.0*l);
       printf("%0.8lf %0.8lf\n",v,vol);
       }

       return 0;
}
