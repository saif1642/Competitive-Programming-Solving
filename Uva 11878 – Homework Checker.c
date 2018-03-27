#include<stdio.h>
#include<cmath>
#include<iostream>
#include<string>

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
