#include<stdio.h>
struct student
{
   char dob[10];
char name[30];
}a[3];
int main()
{
 int i;
   for(i=0;i<3;i++)
   {
     scanf("%s %s",a[i].dob,a[i].name);
   }
   for(i=0;i<3;i++,printf("\n"))
   {
    printf("%s %s",a[i].dob,a[i].name);
    }
    char cmdy[10=24/04/2023;
    char s[10];
    int k=0,v=0,age;
    scanf("name : %s",a);
     for(int j=6;j<10;j++)
           {
               k=cmdy[j]+k*10;
           }
    for(i=0;i<3;i++)
    {
       if(s==a[i].name)
       {
            for(int j=6;j<10;j++)
           {
            v=a[i].dob+v*10;
           }
           age=k-v;
       }
    }
printf("%d",age);

}
