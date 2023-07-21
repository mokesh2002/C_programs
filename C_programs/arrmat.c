#include<stdio.h>
int main()
{
  int n,k=1;
  scanf("%d",&n);
  int a[n][n];
  for(int i=1;i<=n;i++)
  {
  for(int j=1;j<=n;j++)
  {
       a[i][j]=k;
       k++;
  }

  }
  for(int i=1;i<=n;i++)
  {
  for(int j=1;j<=n;j++)
  {
       printf("%d ",a[i][j]);
  }
  printf("\n");
  }
  int r,c;
  scanf("%d",&r);
  scanf("%d",&c);

   for(int j=1;j<=n;j++)
   {
       for(int i=1;i<=n;i++)
      {
      if(i==r && j<c)
       {

           printf("%d ",a[i][j]);
       }
      if(j==c && i<r)
      {
         printf("%d ",a[i][j]);
      }
   }

  }

}
