#include<stdio.h>
#include<stdlib.h>
int count;
void create();
void display();
void insertFront();
void insertMid();
void insertEnd();
void deleteFront();
void deleteMid();
void deleteEnd();

struct node
{
     int data;
     struct node *next;
}*newnode,*head=NULL,*temp,*p=NULL;

int main()
{
    printf("The option of create an Linked List\n");
    printf("1.create an Node\n");
    printf("2.display the Node\n");
    printf("3.Insert node in front \n");
    printf("4.Insert node in the Middle \n");
    printf("5.Insert node in the End \n");
    printf("6.Delete node in Front \n");
    printf("7.Delete node in Middle \n");
    printf("8.Delete node in End \n");
    int option;
    printf("\n\n Enter option \n");
    while(1)
    {
    scanf("%d",&option);
    switch(option)
    {
   case 1:
    {
       create();
       break;
    }
   case 2:
    {
        display();
        break;
    }
   case 3:
    {
        insertFront();
        break;

    }
   case 4:
    {
        insertMid();
        break;
    }
   case 5:
    {
        insertEnd();
        break;
    }
   case 6:
    {
        deleteFront();
        break;
    }
   case 7:
    {
        deleteMid();
        break;
    }
   case 8:
    {
        deleteEnd();
        break;
    }
}
}
}

void create()
{
    int n,i;
    printf("no of nodes :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       newnode=(struct node *)malloc(sizeof(struct node));
       scanf("%d",&newnode->data);
       newnode->next=NULL;
       if(head==NULL)
       {
          head = newnode;
          temp = newnode;
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
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
void insertFront()
{
     newnode=(struct node *)malloc(sizeof(struct node));
     printf("Enter the new data: ");
       scanf("%d",&newnode->data);
       newnode->next=head;
       head=newnode;
       count++;

}
void insertMid()
{
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter the new data: ");
    scanf("%d",&newnode->data);
    int position;
    printf("enter position you want to insert");
    scanf("%d",&position);
    temp=head;
    for(int i=position;i<count;i++)
    {
        if(temp->next!=NULL)
        {
            temp=temp->next;
        }
    }
    newnode->next=temp->next;
    temp->next=newnode;
    count++;

}
void insertEnd()
{

     newnode=(struct node *)malloc(sizeof(struct node));
     printf("Enter the new data: ");
       scanf("%d",&newnode->data);
       newnode->next=NULL;
       temp=head;
       while(temp->next!=NULL)
       {
           temp=temp->next;
       }
       temp->next=newnode;
       count++;

}
void deleteFront()
{
    temp=head;
    head=head->next;

}
void deleteMid()
{
    int position;
    scanf("%d",&position);
    temp = head;
    p= head;
    for(int i = 0; i < position; i++)
    {
        if(i == 0 && position == 1)
        {
            head = head->next;
            free(temp);
        }
        else
        {
            if (i == position - 1 && temp)
            {
                p->next = temp->next;
                free(temp);
            }
            else
            {
                p= temp;
                if(p == NULL)
                    break;
                temp = temp->next;
            }
        }
    }

}
void deleteEnd()
{
    temp=head;
    while(temp->next!=NULL)
    {
        p=temp;
        temp=temp->next;
    }
        p->next=NULL;
        free(temp);


}
