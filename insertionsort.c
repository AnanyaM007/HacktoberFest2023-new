// write a c program to implement insertion sort and find the number of comparisions for each execution

#include <stdio.h>

void insertionSort(int arr[], int n, int *count)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0)
        {
            (*count)++;
            if (arr[j] > key)
            {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int n, i, count = 0, arr[50];
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    insertionSort(arr, n, &count);

    printf("Sorted array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Number of count: %d\n", count);

    return 0;
}
