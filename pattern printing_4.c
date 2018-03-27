#include<stdio.h>
int main ()
{

    int num_row, num_col, i, j, k;


    printf("How many lines of star you want to print?: ");
    scanf("%d", &num_row);

    num_col=num_row;

    for(i=1;i<=num_row;i++){
        for(j=1;j<=num_col;j++){
            printf("*");
        }

        printf("\n");
        num_col--;
    }
    return 0;
}
