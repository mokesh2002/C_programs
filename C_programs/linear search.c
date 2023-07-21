#include<stdio.h>
void linear(int arr[],int n,int key)
{
    int i,count=0;
    for(int i=0;i<n;i++)
    {
        if(key==arr[i])
        {
            count=1;
            break;
        }
    }
    if(count==1)
    {
        printf("value found");
    }
    else
    {
        printf("not found");
    }
}
int main()
{
  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
  {
      scanf("%d",&arr[i]);
  }
  int search;
  scanf("%d",&search);
  linear(arr,n,search);


}
