#include<stdio.h>

void main()
{
    int n_o_row,space,row,star;

    printf("Enter the number of row : \n");
    scanf("%d",&n_o_row);

    for(row=1;row<=n_o_row;row++)
    {
        for(space=n_o_row-row;space>=1;space--)
        {
            printf(" ");
        }
        for(star=1;star<=(2*row)-1;star++)
        {
            printf("*");
        }
        printf("\n");
    }

    for(row=n_o_row-1;row>=1;row--)
    {
        for(space=1;space<=n_o_row-row;space++)
        {
            printf(" ");
        }
        for(star=1;star<=2*row-1;star++)
        {
            printf("*");
        }
        printf("\n");
    }




}

