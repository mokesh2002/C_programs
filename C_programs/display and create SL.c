#include<stdio.h>
#include<stdlib.h>
int count=0;
void create();
void display();
void countp();
void insertEnd();
struct node
{
    int data;
    struct node *next;
}*newnode,*temp,*head=NULL;
int main()
{
    printf("create an linked list : \n");
    create();
    printf("After creating display the linked list \n");
    display();
    printf("Counting the number of nodes \n");
    countp();
    printf("insertin an node in the End \n");
    insertEnd();
    printf("After inserting an node in the end of the list \n");
    display();

}
void create()
{
    int n;
    printf("Input the number of node :");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("Input data for node :");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
        head=newnode;
        temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=temp->next;
        }
        count++;
    }
}
void display()
{
    temp=head;
    printf("Data entered in the list\n");
    while(temp!=NULL)
    {
        printf("Data = %d \n",temp->data);
        temp=temp->next;
    }
}
void countp()
{
    printf(" Total no of Node = %d \n",count);
}
void insertEnd()
{
     newnode=(struct node *)malloc(sizeof(struct node));
        printf("Input data to insert at end of the list :");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
       temp=head;
       while(temp->next!=NULL)
       {
           temp=temp->next;
       }
       temp->next=newnode;
       count++;
       printf("\n");
}

