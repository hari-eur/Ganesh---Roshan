#include <stdio.h>
main() 
{
    char str[9];
    int i, lc = 0, uc = 0, num = 0, spl = 0;
    printf("Enter a string of 8 characters: ");
    for (i = 0; i < 8; i++) 
    {
        scanf("%c", &str[i]);
        if (str[i] >= 'a' && str[i] <= 'z')
            lc = 1;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            uc = 1;
        else if (str[i] >= '0' && str[i] <= '9')
            num = 1;
        else
            spl = 1;
    }
    str[8] = '\0';
    if (lc && uc && num && spl)
        printf("The string is valid.\n");
    else
        printf("The string is not valid.\n");
}
