#include<stdio.h>
#include<algorithm>
#include<iostream>

using namespace std;

int A[100000],L[100000],R[100000],t,n;
int n1,n2;
//int p=1;
void Merge(int A[],int p,int q,int r)
{
    int i,j;
    n1=q-p+1;
    n2=r-q;
    //making L
    for(i=1;i<=n1;i++)
        L[i]=A[p+i-1];
    for(j=1;j<=n2;j++)
        R[j]=A[q+j];

    L[n1+1]=999999;
    R[n2+1]=999999;

    i=1,j=1;

    for(int k=p;k<=r;k++)
    {
        if(L[i]<=R[j])
        {
            A[k]=L[i];
            i++;
        }
        else
        {
            A[k]=R[j];
            j++;
        }
    }
}

void merge_sort(int A[],int p,int r)
{

    if(p<r)
    {
       int q=floor((p+r)/2);
        merge_sort(A,p,q);
        merge_sort(A,q+1,r);
        Merge(A,p,q,r);
    }
    else
        return;
}

int main()
{
    cout<<"Enter size of the array: "<<endl;
    cin>>n;
    cout<<"Enter The elements of array: "<<endl<<endl;
    for(int x=1;x<=n;x++)
        cin>>A[x];

    merge_sort(A,1,n);

    cout<<"Sorted Array:"<<endl;
    for(int x=1;x<=n;x++)
        cout<<A[x]<< " ";


    return 0;
}
