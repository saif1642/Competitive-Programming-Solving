#include<cstdio>
#include<vector>
using namespace std;
#define MAX 100000 //maximum node
vector<int>edges[MAX];
vector<int>cost[MAX]; //parallel vector to store costs;
int main()
{
int N,E,i;

scanf("%d%d",&N,&E);
for(i=1;i<=E;i++)
{
int x,y;
scanf("%d%d",&x,&y);
edges[x].push_back(y);
edges[y].push_back(x);
//cost[x].push_back(1);
//cost[y].push_back(1);
}

int size=edges[1].size();
printf("%d\n",size);
for(int i=0; i < size ; i++)
printf("%d ",edges[1][i]);

return 0;
}
