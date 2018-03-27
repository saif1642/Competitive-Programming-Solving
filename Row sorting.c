#include<stdio.h>

int main( )
{

     int a[][6]={{25,64,96,32,78,27},{50,12,69,78,32,92}};
     int i, j, k, temp, temp1 ;
     for(j=1;j<6;j++)
     {
          for(i=0; i<5; i++)
          {
                if(a[0][i]>a[0][i+1])
                {
                    temp=a[0][i];
                    a[0][i]=a[0][i+1];
                    a[0][i+1]=temp;

                    temp1 = a[1][i];
                    a[1][i] = a[1][i+1];
                    a[1][i+1]=temp1;
                }
          }
     }

     printf ( "\n\nArray after sorting:\n") ;
     for ( i = 0 ; i <2; i++ )
     {
        for(j=0; j<6; j++)
        {
            printf ( "%d\t", a[i][j] ) ;
        }
        printf("\n");
     }

 }
