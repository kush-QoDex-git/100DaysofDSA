//  Given integers a and b, compute a^b using recursion without using pow() function.
#include <stdio.h>

float powr(float a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    return a * powr(a, (b - 1));
}

int main()
{
    float a;
    int b;
    scanf("%f %d", &a, &b);
    printf("%.2f",powr(a,b));

    return 0;
}