// Read a string and check if it is a palindrome using two-pointer comparison.
#include <stdio.h>
int is_palin(char* str){
    int str_len=0;
    while (str[str_len]!='\0')
    {
        str_len++;
    }
    for (int i = 0; i < str_len/2; i++)
    {
        if (str[i]!=str[str_len-1-i])
        {
            printf("NO");
            return 0;
        }
    }    
    printf("YES");
    return 1;
}

int main(){
    char s[50];
    scanf("%s",s);
    is_palin(s);

    return 0;
}