#include<stdio.h>
#include<iostream>
#define M 100000
using namespace std;
long long indexofSmallestElement(long long y[], long long size)
{
long long index = 0;

if (size != 1)
{

    long long n = y[0];
    for (long long i = 1; i < size; i++)
    {
        if (y[i] < n)
        {
            n = y[i];
            index = i;
        }
    }
}
return index;
}

int main(){

long long n,x[100000],y[100000],l,c,a,p;

 cin>>n;

 for(long long i=0;i<n;i++){
    cin>>a>>p;
    x[i]=a;
    y[i]=p;
 }

   l=indexofSmallestElement(y, n);


 long long cost=0;
    if(l==n){
        for(long long  i=0;i<n;i++){

            cost=cost+(x[i]*y[i]);
        }

    }
    else if(l==0){
             for(long long  i=0;i<n;i++){

               cost=cost+(x[i]*y[0]);
        }

    }


    else{
         for(long long  i=0;i<l;i++){

            cost=cost+(x[i]*y[i]);

        }

        for(long long  j=l;j<n;j++){

            cost=cost+(x[j]*y[l]);

        }


    }

    cout<<cost<<endl;

}
