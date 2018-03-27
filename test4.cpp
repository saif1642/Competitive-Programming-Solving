#include<stdio.h>
#include<stdlib.h>

struct list{
    int val;
    struct list *next;
};
typedef struct list item;

void insert_list_head(item **head,int x)
{

    item * new_node;
    new_node = (item *)malloc(sizeof(item));

    new_node->val = x;
    new_node->next = *head;
    *head = new_node;

}

void insert_list_end(item *head,int x)
{
    item *curr,*newnode;

    curr=head;
    while(curr->next != NULL)
        curr = curr->next;
    newnode = (item *)malloc(sizeof(item));
    newnode->val = x;
    newnode->next = NULL;
    curr->next = newnode;

}
void insert_list_middle(item *after,int x)
{
    item * new_node;
    new_node = (item *)malloc(sizeof(item));
    new_node->val = x;
    new_node->next = after->next;
    after->next = new_node;
}
void print_list(item *head)
{
    item *curr;
    curr = head;
    while(curr != NULL)
    {
        printf("%d\n",curr->val);
        curr = curr->next;
    }
}
int main(void)
{
    int i,x;
    item *head = NULL;
    item *curr;
    //insert an item into the list
    for(i=1;i<10;i=i+2)
    {
        if(head==NULL)
        {
            insert_list_head(&head,i);
            //printf("Inserted into head");
        }
        else
            insert_list_end(head,i);
        //printf("%p",head);
    }

    print_list(head);
    return 0;

}
