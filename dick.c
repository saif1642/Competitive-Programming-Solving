#include <stdio.h>

int main()
{
    int x, y, z;

    printf("Enter the value of x and theny/n");
    scanf("%d%d", &x, &y);

    z=x+y;
    printf("the value of %d+%d equals %d\n", x, y, z);
    return 0;
}
