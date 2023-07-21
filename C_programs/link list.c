#include<stdio.h>
void main()
{
struct node
{
 int data;
 struct node *next;

};
 struct node *head,*newnode,*temp;
   head=0;
   int num=4;
for(int i=0;i<num;i++)
   {
     newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter data");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(head==0)
    {
      head=newnode;
    }
    else
        {
    temp->next=newnode;
    temp=newnode;
   }
   }
temp=head;
printf("the list\n");
while(temp!=NULL)
{

    printf("%d",temp->data);
    temp=temp->next;
}
getch();
}
