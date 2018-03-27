#include <iostream>
#include<stdio.h>
using namespace std;

int n, arr[1010];

int main()
{
    while(cin>>n&&n)
    {
        bool zero=false;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];

        }


            for(int i=0;i<n;i++)
                if(arr[i]!=0){
                     if (zero)
                    printf (" ");
                    zero=true;
                    printf("%d",arr[i]);
                }
         if(!zero)
        {
            cout<<"0";
        }
        cout<<"\n";
    }
    return 0;
}
