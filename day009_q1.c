#include <stdio.h>

void reverse_arr(char *str)
{
    int str_len = 0;
    while (str[str_len] != '\0')
    {
        str_len++;
    }

    char temp;
    for (int i = 0; i < str_len / 2; i++)
    {
        temp = str[i];
        str[i] = str[str_len - 1 - i];
        str[str_len - 1 - i] = temp;
    }
}

int main()
{
    char str[60];
    scanf("%s", str);
    reverse_arr(str);
    printf("%s", str);

    return 0;
}