

#include <stdio.h>

int main()
{
    int array[100], minimum, size, c;

    printf("Enter the number of elements in array\n");
    scanf("%d",&size);


    for ( c = 0 ; c < size ; c++ )
        scanf("%d", &array[c]);

    minimum = array[0];

    for ( c = 1 ; c < size ; c++ )
    {
        if ( array[c] < minimum )
        {
           minimum = array[c];

        }
    }

  for(c=0;c<size;c++)
  {
      if(array[c]%minimum==0)
      printf("lcm is %d\n",minimum);
      else if(array[c]%minimum==0)
      printf("1\n");

  }

}
