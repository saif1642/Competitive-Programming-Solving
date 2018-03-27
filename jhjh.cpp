/*------------------------------------------------*/
//Problem Setter: Rujia Liu
//Uva Problem No: 11878
//Problem Name  : Homework Checker
//Type          : Ad hoc
//Author        : Shipu Ahamed
//University    : BUBT
//E-mail        : shipuahamed01@gmail.com
/*--------------------------------------------*/

#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<iostream>
#include<cctype>
#include<map>
#include<stack>
#include<cstdlib>
#include <queue>
#include <vector>
#include<algorithm>
#define ll long long
#define sc scanf
#define pf printf
#define Pi 2*acos(0.0)
using namespace std;
int main()
{
    int a,b,count=0;
    char sine,c[1000];
    while(sc("%d%c%d=%s",&a,&sine,&b,c)==4)
    {
        if(sine=='+')
        {
            if(a+b==atoi(c))
            count++;
        }
        else if(sine=='-')
        {
            if(a-b==atoi(c))
            count++;
        }
    }
    pf("%dn",count);
    return 0;
}
