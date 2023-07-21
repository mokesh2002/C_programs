#include<stdio.h>
void Arrays(int a[],int n,int l)
{

      if(l<n)
      {
          printf("%d ",a[l]);
      }
      else
      {
          return 0;
      }
      Arrays(a,n,l+1);


}
int main()
{
   int n;
   printf("size of the Array :");
   scanf("%d",&n);
   int a[100];
   for(int i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   int l=0;
   printf("the elements are ");
    Arrays(a,n,l);

}
