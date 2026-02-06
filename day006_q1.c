// Given a sorted array of n integers, remove duplicates in-place. Print only unique elements in order.
#include <stdio.h>
void print_arr(int *arr, int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("%d ", arr[i]);
    }
}
void rm_dublicate(int *arr, int n)
{
    int num = 0;
    for (int i = 0; i < (n-num); i++)
    {
        if (arr[i] == arr[i - 1])
        {
            for (int j = i; j < n - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
            arr[n-1]=0;
            num++;
            i--;
        }
    }
    print_arr(arr,(n-num));
}
int main()
{
    int n1;
    scanf("%d", &n1);
    int a1[n1];
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &a1[i]);
    }
    rm_dublicate(a1,n1);

    return 0;
}