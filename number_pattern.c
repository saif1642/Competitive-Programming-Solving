#include<stdio.h>
int main(){

int n,i,j;

printf("Enter the number of rows\n");
scanf("%d",&n);

for(i=1;i<=n;i++){

for(j=1;j<=n;j++){

printf(" %d",i*j);

}

printf("\n");

}

return 0;
}
