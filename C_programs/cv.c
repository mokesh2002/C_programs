#include<stdio.h>
void mul(int *n)
{
   *n=*n+2;
   printf("%d\n",*n);
}
int main()
{
   int n;
   int *ptr=&n;
   scanf("%d",&n);
   printf("%d\n",*ptr);
   printf("%d\n",ptr);
   mul(ptr);
   printf("%d",n*n);


}
