#include<stdio.h>
#include<stdlib.h>

int main()
{
    int t,i,n,a[100];
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);

        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        int  minimum = a[0];
         int maximum=a[0];

    for ( int c = 1 ; c < n ; c++ )
       {
        if ( a[c] < minimum )
            {
              minimum = a[c];
            }
         if ( a[c] > maximum )
            {
              maximum = a[c];
            }
       }
       printf("%d\n",2*(maximum-minimum));
    }

}
