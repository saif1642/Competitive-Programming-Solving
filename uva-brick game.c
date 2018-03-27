#include<stdio.h>
int main()
{
    int t,i,j,swap,m,c;
    scanf("%d",&t);
    for(c=1;c<=t;c++)
    {
        int num,a[12];
        scanf("%d",&num);
        if(num%2!=0){
        for(i=0;i<num;i++)
        scanf("%d",&a[i]);

        for (i = 0 ; i < ( num - 1 ); i++)
      {
        for (j = 0 ; j < num - i - 1; j++)
        {
      if (a[j] > a[j+1])
        {
        swap       = a[j];
        a[j]   = a[j+1];
        a[j+1] = swap;
       }
     }
   }


   m=((num+1)/2)-1;

   printf("Case %d: %d\n",c,a[m]);
        }
    }
}
