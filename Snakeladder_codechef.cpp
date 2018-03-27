#include<stdio.h>
#include <iostream>
#include<cmath>

using namespace std;

int main() {
    int t;
    double b,ls,rs_min,rs_max;
    scanf("%d",&t);

    while(t--) {

        scanf("%lf%lf",&b,&ls);

        rs_min=sqrt((ls*ls)-(b*b));
        rs_max=sqrt((ls*ls)+(b*b));
        printf("%.5f %.5f\n",rs_min,rs_max);
    }
    return 0;
}


