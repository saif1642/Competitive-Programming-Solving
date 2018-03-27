#include<stdlib.h>
#include<stdio.h>

struct Node{
int data;
struct Node* next;
};
void Insert(int x);
void print();
struct Node* head;

int main(){
  head=NULL;

  printf("How many Number?\n");

  int i,n,x;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&x);
    Insert(x);
    print(x);
  }
}

void Insert(int x){

   struct Node *temp=(Node*)malloc(sizeof(struct Node));

    temp->data=x;

    temp->next=head;

    head=temp;

}

void print(){
struct Node* temp=head;

while(temp!=NULL){

    printf("%d",temp->data);
    temp=temp->next;

}

}
