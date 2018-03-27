#include<stdio.h>
#include<iostream>
#include<vector>

using namespace std;
int main()
{
   vector<int> v;

    int n,m;
    cin>>n;

   for(int i=0;i<n;i++)
    {
        cin>>m;
        v[i]=m;
    }
    for(int i=v.begin();i<v.end();i++)
    {
        cout<<v[i]<<endl;
    }

}
