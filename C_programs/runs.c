#include<stdio.h>
struct cricter
{

   char name[34];
   int runs;

}a[3];
int main()
{
    int i;
   for(i=0;i<3;i++)
   {
     scanf("%s %d",a[i].name,&a[i].runs);
   }
   int  total_runs=0;
   for(i=0;i<3;i++,printf("\n"))
   {
    printf("%s %d",a[i].name,a[i].runs);
    total_runs=total_runs+a[i].runs;
   }

  printf("%d",total_runs);
}
