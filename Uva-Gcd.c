 #include<stdio.h>

    int main(){
    int a,b,p,q,c;
    printf("Enter 2 numbers:");
    scanf("%d%d%d",&a,&b,&c);
    p=gcd(a,b);
    q=gcd(p,c);
    printf("Greatest Common Divisor is %d",q);

    return 0;
    }
    int gcd(long a,long b)
    {
    if(b==0)
    return a;
    else
    return gcd(b,a%b);
    }

