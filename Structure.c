#include<stdio.h>

struct record{

    char name[15];
    char ID[15];
    char CGPA[15];
};
int main()
{
    struct record a[5];
    int i;

    for(i=0;i<5;i++)
    {
        printf("Enter name: ");
        scanf("%s",&a[i].name);
        printf("Enter ID: ");
        scanf("%s",&a[i].ID);
        printf("Enter CGPA: ");
        scanf("%s",&a[i].CGPA);

    }

    printf("a.Name\tb.ID\tc.CGPA\n");

    for(i=0;i<5;i++)
    {
        printf("Name:%s ,ID:%s, CGPA:%s\n\n",a[i].name,a[i].ID,a[i].CGPA);
    }



}
