#include <stdio.h>

int main()
{
   int n, c, d, a[100], b[100];

   printf("Enter the number of elements in array\n");
   scanf("%d", &n);

   printf("Enter the array elements\n");

   for (c = 0; c < n ; c++)
      scanf("%d", &a[c]);

      for(d=c;d>=0;d--)
      printf("%d",a[d]);

      return 0;
}
