#include<stdio.h>
int main()
{
    int arr[100],n,i,search,length,mid,flag=0,heigth;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&search);
    length = arr[0];
    heigth = n-1 ;
    while(length <= heigth)
    {
        mid = (length + heigth)/ 2;
        {
            if(arr[mid] == search)
            {
                flag=1;
                break;
            }
            else
            {
                if(arr[mid] < search)
                    length = mid+1 , heigth = heigth;
                else
                    length = length , heigth = mid;
            }

        }

    }
    if(flag == 0)
    {
        printf("%d is not present in the given list",search);
    }
    else
    {
        printf("%d is present in the given list",search);

    }



    return 0;
}
