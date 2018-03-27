#include<stdio.h>
int main ()
{

    int num_row, num_col, i, j, k;


    printf("How many lines of star you want to print?: ");
    scanf("%d", &num_row);



    for(i=0;i<num_row;i++){

       for(j=0;j<i;j++)
       {
           printf(" ");
       }


       for(k=0;k<num_row-i;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
