#include<stdio.h>
int increase(int *arr,int num)
{
 int i;
 for(i=0;i<num-1;i++)
 {
 if(arr[i]<arr[i+1])
 return 0;
 }
 return 1;
}
int decrease(int *arr,int num)
{
 int i;
 for(i=0;i<num-1;i++)
 {
 if(arr[i]>arr[i+1])
 return 0;
 }
 return 1;
}
int main()
{
 int arr[100],size;
 int j;
 scanf("%d",&size);
 for(j=0;j<size;j++)
 scanf("%d",&arr[j]);
 if(increase(arr,size)||decrease(arr,size))
 {
 printf("Monotonic");
 }
 else
 printf("No Monotonic");
}
