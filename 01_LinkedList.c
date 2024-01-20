// Implementation and Printing of Linked List Using C 

// including header file

#include<stdio.h>
#include<stdlib.h>

// making structure data type node 

typedef struct node{
    int data;
    struct node* next;
}node;

int main()
{
    // taking 3 pointer

    node *head,*p,*q;
    int n,i;

    // taking input for number of nodes

    printf("Enter Number of Nodes: ");
    scanf("%d",&n);

    // allocating memory for head node using malloc function 

    head=(node*)malloc(sizeof(node));
    printf("Enter Value: ");

    // storing value in head 

    scanf("%d",&(head->data));

    // next value after head is not present so it is NULL

    head->next=NULL;

    // taking temporary pointer at head which move within a list by which head is at fixed position

    q=head;

    // once we already created a node so the for loop runs n-1 time 

    for(i=1;i<n-1;i++)
    {
        // on every iteration we allocating a memory for p node

        p=(node*)malloc(sizeof(node));
        printf("Enter Value: ");

        // storing a value in p 

        scanf("%d",&(p->data));

        // here also p has no next value so it points to NULL
        p->next=NULL;

        // now q is head in 1st time after head or q node there is p so storing p in q->next

        q->next=p;

        // since 1 itration is done q should be go on second node by which if in next iteration p creates a node then it must me linked with the previous node so if q is at next position it helps to link with p 

        q=q->next;
    }

    // after for loop ends the q pointer is at last 
    // so we bringing the q pointer again to head

    q=head;

    // printing section start

    // now for printing the list we have to print the data of q until the q become null it means until q is at last position

    while(q!=NULL)
    {
        printf("%d ",(q->data));

        // after every print we have to shift the q to next node 

        q=q->next;
    }

    return 0;
}