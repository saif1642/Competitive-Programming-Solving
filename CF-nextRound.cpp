#include<stdio.h>
#include<iostream>
#include <algorithm>
using namespace std;
int main(){

int n,b[1050],a,sum,prev;


while(scanf("%d",&n)==1){
for(int i=0;i<n;i++){

    scanf("%d",&a);
    b[i]=a;
 }
int count=0;
 prev = b[0];

for (int i=1;i<n;i++)
{
  if (b[i]==prev)
  {

      count++;
  }


}
cout<<count;


}
}


