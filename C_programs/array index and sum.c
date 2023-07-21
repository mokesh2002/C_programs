//Write the Program to nd the maximum possible sum of index*arr[index] among all rotations of a given array //

#include<stdio.h>
//sum of the arrayelements*index number
int main()
{
   int n,sum=0;
   scanf("%d",&n);
   int a[n];
   for(int i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
   }
   for(int i=0;i<n;i++)
   {
   sum=sum+(i*a[i]);
   }
   printf("%d",sum);



}
