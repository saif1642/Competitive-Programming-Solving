#include<stdio.h>
int main()
{
    //this is coded by azad
    int a,b,c;
    printf("enter number1: ");
    scanf("%d", &a);
    printf("enter number2: ");
    scanf("%d", &b);
    printf("enter number3: ");
    scanf("%d", &c);
    if (a>=b && b>=c)
    {
        printf("max 2 number are %d , %d", a,b);

    }
    if (b>=a && c>=b)
    {
        printf("max 2 numbers are %d , %d", c,b);
    }
    if (c>=a && a>=b)
    {
        printf("max 2 numbers are %d , %d", c,a);
    }
    if (a>=c && c>=b)
    {
        printf("max 2 numbers are %d , %d", a,c);
    }
    if (b>=a && a>=c)
    {
        printf("max 2 numbers are %d , %d", b,a);
    }
    if (b>=c && c>=a)
    {
        printf("max 2 numbers are %d , %d", b,c);
    }
    return 0;
}
