#include<stdlib.h>
#include<stdio.h>

using namespace std;
struct Node{

 int data;
 struct Node* next;
};

struct Node* head;
void print(){
  Node* temp = head;
  while(temp !=NULL){
    printf("%d ",temp->data);
    temp=temp->next;
  }

printf("\n");
}

void Insert(int data,int p)
{
    Node* temp1=new Node();
    temp1->data=data;
    temp1->next=NULL;

    if(p==1){
        temp1->next=head;
        head=temp1;
        return;
    }
   Node* temp2=head;
   for(int i=0;i<p-2;i++){
    temp2=temp2->next;
   }
   temp1->next=temp2->next;
   temp2->next=temp1;
   temp1=temp2=NULL;
   return;

}
void intsertsorted(int num){

    }


void Delete(int n){

   struct Node* temp1 =head;
   if(n==1){
        head=temp1->next;
        free(temp1);
        return;
    }
   for(int i=0;i<n-2;i++){
    temp1=temp1->next;
   }
   struct Node* temp2=temp1->next;
   temp1->next=temp2->next;
   free(temp2);
}
int main(){
   head=NULL;
   int i=1;
   for(int k=2;k<10;k=k+2){
    Insert(k,i);
    i++;

   }
   print();
   //Delete(4);
   //print();
   intsertsorted(1);



}
