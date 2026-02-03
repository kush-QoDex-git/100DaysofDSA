#include <stdio.h>

int l_search(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            printf("Found at index: %d", i);
            printf("Comparisons = %d", i + 1);
            return i;
        }
    }
    printf("NOT found");
    return -1;
}

int main()
{
    int n, tar;
    scanf("%d", &n);
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    scanf("%d", &tar);
    l_search(arr1, n, tar);

    return 0;
}