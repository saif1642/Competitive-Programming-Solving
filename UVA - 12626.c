#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n=0;
    scanf("%d",&n);
    while(n--){
        int M=0,A=0,R=0,G=0,I=0,T=0,i=0,z=0;
        char str[600];
        int pizza=0;
        scanf("%s",str);
        z=strlen(str);
        for(i=0;i<z;i++){
            if(str[i]=='M')
                M++;
            else if(str[i]=='A')
                A++;
            else if(str[i]=='R')
                R++;
            else if(str[i]=='G')
                G++;
            else if(str[i]=='I')
                I++;
            else if(str[i]=='T')
                T++;
        }
         for(; M>=1 && A>=3 && G>=1 && R>=2 && I>=1 && T>=1; M--,A-=3,G--,R-=2,I--,T--)
            pizza++;
        printf("%d\n",pizza);
    }
    return 0;
}
