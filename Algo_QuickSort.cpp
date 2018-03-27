#include<stdio.h>
#include<iostream>
#include <algorithm>

using namespace std;

void quicksort(int,int);
int x[100000],j,temp,i;


 int main(){
  int n,k;

    cout<<"Enter size of the array: "<<endl;
    cin>>n;

    cout<<"Enter The elements of array: "<<endl<<endl;
    for(k=1;k<=n;k++)
        cin>>x[k];

    quicksort(1,n);

   cout<<endl<<"Sorted elements: "<<endl;

   for(k=1;k<=n;k++)
      cout<<x[k]<< " ";
  return 0;
}


  void quicksort(int first,int last){


     if(first<last)
         i=first+1;
     else
        return;
         while(x[i]<x[first])
              i++;
        j=last;

        while(x[j]>x[first]){
            j--;
        }
        while(i<j)
        {
            swap(x[i],x[j]);
           while(x[i]<x[first])
            i++;
           while(x[j]>x[first])
            j--;
        }
         printf("fuck2\n");
         swap(x[first],x[j]);
         quicksort(first,j-1);
         quicksort(j+1,last);

}
