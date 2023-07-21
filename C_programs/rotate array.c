#include <stdio.h>
void rotates(int arr[], int n,int k)
{
    int j;
    for (int i = 0; i < k; i++)
        {
        int t=arr[n-1];
        for ( j = n-1; j>0; j--)
        {
          arr[j]=arr[j-1];
        }
        arr[j]=t;
    }
    for(int i=0;i<n;i++)
    {

        printf("%d ",arr[i]);
    }
}


int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int k;
    printf("Enter no of times to rotate: ");
    scanf("%d", &k);
    rotates(arr, n,k);

    return 0;
}
