#include<stdio.h>


int main()
{
    int a[8],i,j,c,d,m[8];
    int count;
   while(1){
    for(i=0;i<6;i++)
    {
        scanf("%d",&a[i]);

    }

   for(i=0;i<6;i++)
   { count=0;
       for(j=0;j<6;j++)
       {
           if(a[i]==a[j])
           {
             count++;
           }


       }

   }

if(count==4)
{
   for(i=0;i<6;i++)
   {
       for(j=0;j<6;j++)
     {
        if(a[i]!=a[j])
       {
           m[j]=a[j];
       }
    }

   }
for(i=0;i<2;i++)
{
    if(m[i]==m[i+1])
    printf("Elephant\n");
    else if(m[i]!=m[i+1])
    printf("Bear\n");

}


}



   }

return 0;

}
