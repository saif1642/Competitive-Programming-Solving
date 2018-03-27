#include<stdio.h>
#include <iostream>
#include <vector>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include <iomanip>
using namespace std;

int main(){

  double m1,m2,m3;

  while(scanf("%lf%lf%lf",&m1,&m2,&m3)==3){

    double area;
    double s1=2*(m1*m1*m2*m2+m2*m2*m3*m3+m3*m3*m1*m1);
    double s2=(m1*m1*m1*m1+m2*m2*m2*m2+m3*m3*m3*m3);

    area=sqrt((double)s1-(double)s2)/3.0;

    if(!(area>0)){
            area=-1.0;
        }



   cout<<setprecision(4)<<area<<endl;
  }



 }


