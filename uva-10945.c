# include <ctype.h>
# include <string.h>
int main()
{
      int n;
      char a[1000],a1[1000],chr;

      while(1)
      {
          gets(a);
          if(strcmp("DONE",a)==0)
            return 0;
          else
          {
              n=strlen(a);
              for(int i=n;i>0;i++)
              {
                  a1[i]=a[i];
              }

              if(strcmp(a,a1)==0)
                printf("yes");
              else
                printf("No");
          }
      }







return 0;
}

