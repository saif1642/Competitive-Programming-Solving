#include<stdio.h>
#include<iostream>
#define ll long long
using namespace std;
ll a[10010];

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	 ll sum=0,n,y,i;
		scanf("%lld",&n);
		for(i=0;i<n;i++)
		{

			scanf("%lld",&y);
			a[i]=y;

		}
		ll prev=a[0];
		for(i=1;i<n;i++)
             prev=a[i]-prev;

		if(prev==0)
		{

			printf("YES\n");
		}
		else
			printf("NO\n");
	}
	return 0;
}
