// Given an array of n integers, reverse the array in-place using two-pointer approach.
#include <stdio.h>

void reverse_arr(int *arr, int count)
{
    int temp;
    for (size_t i = 0; i < count / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[count - 1 - i];
        arr[count - 1 - i] = temp;
    }
}
void print_arr(int *arr, int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    reverse_arr(arr, n);
    print_arr(arr, n);

    return 0;
}