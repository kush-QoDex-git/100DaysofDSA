// Write a program to check whether a given matrix is symmetric. A matrix is said to be symmetric if it is a square matrix and is equal to its transpose (i.e., element at position [i][j] is equal to element at position [j][i] for all valid i and j).
#include <stdio.h>
#include <stdlib.h>

int is_symmetric(int **m, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (m[i][j] != m[j][i])
            {
                printf("Not a Symmetric Matrix");
                return 0;
            }
        }
    }
    printf("Symmetric Matrix");
    return 0;
}
int main()
{
    int m;
    scanf("%d",&m);
    int** mat=(int**)(malloc(m*sizeof(int*)));
    for (int i = 0; i < m; i++)
    {
        mat[i]=(int*)(malloc(m*sizeof(int)));
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    is_symmetric(mat,m);

    
    return 0;
}