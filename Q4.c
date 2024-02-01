
#include<stdio.h>
#include<stdlib.h>
struct node{
    char data;
    struct node *next;

};

struct node *head =NULL;
void fun(struct node *start){
    if(start ==NULL)
        return ;
    printf("%c",start->data);
    if(start->next!=NULL)
        fun(start->next->next);
    printf("%c",start->data);      
}

void create(char data)
{
    
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        if(head==NULL){
            head = newnode;
            newnode->data = data;
            newnode->next = NULL;
        }
        else
        {
            struct node *temp ;
            temp = head;
            while(temp->next!=NULL){
                temp = temp->next;
            }
            newnode->data=data; 
            temp->next = newnode;
        }
    }



int main(){
        create('I');
        create('I');
        create('T');
        create('K');
        create('G');
        create('P');

        fun(head);
}

void fun(Queue *que){
    Stack stk;

    while(!isEmpty(que)){
        push(&stk,dequeue(que))
    }
    while(!isEmpty(&stk)){
        enQueue(que,pop(&stk));
    }
}