#include <stdio.h>
#include <string.h>

void swap(char *a, char *b) 
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

void permute(char *str, int l, int r) 
{
    if (l == r) 
    {
        printf("%s\n", str);
    } 
    else 
    {
        for (int i = l; i <= r; i++) 
        {
            swap(str + l, str + i);
            permute(str, l + 1, r);
            swap(str + l, str + i);
        }
    }
}

int main() 
{
    char str[9];
    int lc = 0, uc = 0, num = 0, spl = 0;
    printf("Enter a string of 8 characters: ");
    scanf("%s", str);
    if (strlen(str) != 8) 
    {
        printf("String must be 8 characters long!!\n");
    }
    for (int i = 0; i < strlen(str); i++) 
    {
        if (islower(str[i])) 
        {
            lc = 1;
        }
        else if (isupper(str[i])) 
        {
            uc = 1;
        } 
        else if (isdigit(str[i])) 
        {
            num = 1;
        } 
        else 
        {
            spl = 1;
        }
    }

    if (!lc || !uc || !num || !spl) 
    {
        printf("String must contain at least one lowercase letter, one uppercase letter, one number, and one special character.\n");
    }
    printf("All permutations of the string:\n");
    permute(str, 0, strlen(str) - 1);
}
