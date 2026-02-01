/*Insert an Element in an Array

Problem: Write a C program to insert an element x at a given 1-based position pos in an array of n integers. Shift existing elements to the right to make space.

Input:
- First line: integer n
- Second line: n space-separated integers (the array)
- Third line: integer pos (1-based position)
- Fourth line: integer x (element to insert)

Output:
- Print the updated array (n+1 integers) in a single line, space-separated

Example:
Input:
5
1 2 4 5 6
3
3

Output:
1 2 3 4 5 6

Explanation: Insert 3 at position 3, elements [4,5,6] shift right*/
#include <stdio.h>
#include <stdlib.h>
void insert_at(int *arr, int size, int pos, int num)
{
    arr = realloc(arr, size + 1);
    for (int i = size; i > (pos - 1); i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = num;
}
void print_arr(int *arr, int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void main()
{
    int n, pos, num, check;

    scanf("%d", &n);

    int *d_arr = (int *)(malloc(n * sizeof(int)));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &d_arr[i]);
    }
    print_arr(d_arr, n);

    scanf("%d", &pos);
    scanf("%d", &num);
    insert_at(d_arr, n, pos, num);
    print_arr(d_arr, (n + 1));
}