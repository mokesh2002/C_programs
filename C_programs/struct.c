#include<stdio.h>
struct employee
{
   int id;
   char name[34];
   char gender[20];
   int salary;

}a[3];
int main()
{
    int i;
   for(i=0;i<3;i++)
   {
     scanf("%d %s %s %d",&a[i].id,a[i].name,a[i].gender,&a[i].salary);
   }
   int  total=0;
   for(i=0;i<3;i++,printf("\n"))
   {
    printf("%d %s %s %d",a[i].id,a[i].name,a[i].gender,a[i].salary);
    total=total+a[i].salary;
   }

  printf("%d",total);
}
