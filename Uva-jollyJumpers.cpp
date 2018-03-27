#include<stdio.h>
#include<algorithm>
#include<stdlib.h>
using namespace std;

int main(){

  int f,n,a[3010],b[3010],i;

  while(scanf("%d",&n)==1){
    f=1;
    for( i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for( i=0;i<n-1;i++){
        b[i]=abs(a[i+1]-a[i]);
    }
    sort(b,b+i);
    for(int j=1;j<n;j++){
        if(b[j]==b[j-1]){
            f=0;
            break;
        }

    }

    if(f==0)
        printf("Not jolly\n");
    else
        printf("Jolly\n");
  }

}
