#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head,*temp,*newnode;

int main()
{printf("%d\n",head);
    int n;
    int size,i;
    int count=0;
    printf("switch case:\n");
    scanf("%d",&n);
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        count++;
    }
        temp=head;
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("\ncount:%d",count);
         switch(n)
    {
        case 1:
            printf("\ninsert at front:\n");
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        temp=head;
        newnode->next=temp;
        head=newnode;
        temp=head;
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        case 2:
         printf("\n insert at end:\n");
         newnode=(struct node*)malloc(sizeof(struct node));
         scanf("%d",&newnode->data);
         newnode->next=NULL;
         temp=head;
         while(temp!=NULL)
        {
            printf("%d ",temp->data);
            if(temp->next==NULL)
            {
                temp->next=newnode;
                temp=temp->next;
                printf("%d",temp->data);
                break;
            }
            else
            {
                temp=temp->next;
            }
        }
        case 3:
            printf("\n middle:\n");
            int p;
            scanf("%d",&p);
         newnode=(struct node*)malloc(sizeof(struct node));
         scanf("%d",&newnode->data);
         newnode->next=NULL;
         temp=head;
         for(i=1;i<p-1;i++)
         {
             temp=temp->next;
         }
         newnode->next=temp->next;
         temp->next=newnode;
         temp=head;
         while(temp!=NULL)
         {
             printf("%d ",temp->data);
             temp=temp->next;
         }
         printf("\ndelete at front:\n");
         newnode=(struct node*)malloc(sizeof(struct node));
         temp=head;
         head=head->next;
         temp->next=NULL;
         temp=head;
         while(temp!=NULL)
         {
              printf("%d ",temp->data);
              temp=temp->next;
         }
    }
}
