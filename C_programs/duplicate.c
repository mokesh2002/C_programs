#include <stdio.h>
void Duplicates(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                for (int k = j; k < n; k++)
                {
                    arr[k] = arr[k+1];
                }
                n--;
            }
        }
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
    Duplicates(arr, n);

    return 0;
}
