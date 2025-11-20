#include <stdio.h>

int main()
{
    int size, a, z;
    printf("first enter the array size = ");
    scanf("%d", &size);

    int arr[size + 1]; // 1-based indexing

    printf("\nnow enter array elements = ");
    for (int i = 1; i <= size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\narray is = ");
    for (int i = 1; i <= size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nwhich element to be moved = ");
    scanf("%d", &a);

    int temp = arr[a];
    for (int i = a; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }

    printf("\nwhere to move = ");
    scanf("%d", &z);
    for (int i = size; i > z; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[z] = temp;

    printf("\nfinal array = ");
    for (int i = 1; i <= size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
