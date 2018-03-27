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

void InsertSorted(int data)
{
    Node* temp1=new Node();
     struct Node* current;
    temp1->data=data;
    temp1->next=NULL;

    if (head == NULL || (head)->data >= temp1->data)
    {
        temp1->next=head;
        head=temp1;
        return;
    }
     else
    {
        /* Locate the node before the point of insertion */
        current = head;
        while (current->next!=NULL &&current->next->data < temp1->data)
        {
            current = current->next;
        }
        temp1->next = current->next;
        current->next = temp1;
    }



}



int main(){
   head=NULL;


   //Delete(4);
   //print();
   InsertSorted(1);
   InsertSorted(4);
   InsertSorted(3);
      print();



}

