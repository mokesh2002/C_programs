#include<stdio.h>
int main()
{
int n,k=0;
   scanf("%d",&n);
   int a[n];
   for(int i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
   }`
   for(int i=1;i<n;i++)
   {
   for(int j=i-1;j<n;j++)
   {
      if(i>j && a[i]<a[j])
      {
        printf("%d,%d\n %d,%d\n\n",a[j],a[i],i,j);
      }


  }
      }
}
