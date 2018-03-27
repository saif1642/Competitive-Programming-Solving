#include <stdio.h>

int main()
{
    int cases,i=1;
    double r;
    scanf("%d",&cases);
    while(cases--){
        scanf("%lf",&r);
        printf("Case %d:\n",i);
        printf("%.0lf %.0lf\n",-2.25*r,1.5*r);
        printf("%.0lf %.0lf\n",2.75*r,1.5*r);
        printf("%.0lf %.0lf\n",2.75*r,-1.5*r);
        printf("%.0lf %.0lf\n",-2.25*r,-1.5*r);
        i++;
    }
    return 0;
}
