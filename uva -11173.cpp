#include <stdio.h>
#include<iostream>
using namespace std;

int main() {
	int t,n,G;
    scanf("%d",&t);
	while(t--){

		scanf("%d%d",&n,&G);
		printf("%d\n", G^(G>>1));



	}

	return 0;
}
