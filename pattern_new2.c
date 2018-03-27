#include<stdio.h>

int main()
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
        for(star=1;star<=row;star++)
        {
            printf("* "); //importan space for the work//
        }
        printf("\n");
    }



}

