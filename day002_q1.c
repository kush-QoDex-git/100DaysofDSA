#include <stdio.h>

void delete_from(int *arr, int *size, int pos)
{
    for (int i = (pos - 1); i < *size; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[*size - 1] = (int)NULL;
    --(*size);
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
    int a1[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a1[i]);
    }
    int pos;
    scanf("%d", &pos);
    delete_from(a1, &n, pos);
    print_arr(a1, n);

    return 0;
}