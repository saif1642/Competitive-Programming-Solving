#include<stdio.h>
#include<iostream>
#include <algorithm>
using namespace std;
int main(){

  int n,b[1050],a,sum,prev;

int j=0;

while(scanf("%d",&n)==1){
  sum=0;
while(n--){

    scanf("%d",&a);
    b[++j]=a;
 }

 prev = b[0];

for (int i = 1; i < n; i++)
{
  if (b[i]==prev)
  {
      sum+=b[i];
  }


}
cout<<sum;
 if(sum==0){
   printf("-1\n");
 }
 else
     printf("%d\n",sum);


 }


}

