#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    printf("Enter the bill amounts");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int five=0,ten=0,twenty=0,result=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==5 || a[i]==10 || a[i]==20)
        {
        if(a[i]==5)
        {
            five++;
        }
        else if(a[i]==10)
        {
            if(five>0)
            {
            ten++;
            five--;
            }
            else
            {
              result=1;
              break;
            }
        }
        else if(a[i]==20)
        {
            if(ten>0 && five>0)
            {
                ten--;
                five--;
            }
            else if(five>=3)
            {
                five=five-3;
            }
            else
            {
               result=1;
                break;
            }
        }
        }
        else
        {
            result=1;
            break;
        }
    }
    if(result==0)
    {
        printf("True");
    }
    else
        {
        printf("false");

        }


}
