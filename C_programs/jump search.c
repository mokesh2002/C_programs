#include<stdio.h>
int jumpsearch(int arr[],int n,int search)
{
    int st=0,jump=n/2;
    while(search > arr[jump])
    {
        st = jump;
        jump += n/2;
        if(jump >= n)
        {
            return -1;
        }
    }
    while(st<=jump)
    {
        if(search == arr[st])
        {
            return st;
        }
        st++;
    }
    return -1;
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
    int index = jumpsearch(arr,n,search);
    if(index == -1)
    printf("%d is not present in the given list",search);
    else
    printf("%d is present in the given list",search);


}
