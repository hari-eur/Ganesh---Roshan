#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main() 
{
    int c;
    char bank[50];
    
    printf("*******Welcome to Banking System*********\n");
    printf("Choose a Bank:\n");
    printf("1. Canara Bank\n");
    printf("2. Bank of India\n");
    printf("3. HDFC Bank\n");
    printf("4. Citibank\n");
    scanf("%d", &c);

    switch (c) 
	{
        case 1:
            strcpy(bank, "Canara Bank");
            break;
        case 2:
            strcpy(bank, "Bank of India");
            break;
        case 3:
            strcpy(bank, "HDFC Bank");
            break;
        case 4:
            strcpy(bank, "Citibank");
            break;
        default:
            printf("Invalid c!\n");
            exit(0);
    }
    
    printf("\nYou have selected %s.\n", bank);
    printf("Please choose account type:\n");
    printf("1. Savings account\n");
    printf("2. Current account\n");
    printf("3. Demat account\n");
    scanf("%d", &c);

    switch (c) 
	{
        case 1:
            printf("\n%s Savings Account Details:\n", bank);
            printf("Interest rate: 4.5%%\n");
            printf("Minimum balance: Rs 1000\n");
            break;
        case 2:
            printf("\n%s Current Account Details:\n", bank);
            printf("Interest rate: 1.5%%\n");
            printf("Overdraft limit: Rs 40,000\n");
            break;
        case 3:
            printf("\n%s Demat Account Details:\n", bank);
            printf("Annual maintenance charges: Rs 800\n");
            printf("Transaction fees: Rs 100 per trade\n");
            break;
        default:
            printf("Invalid c!\n");
            exit(0);
    }
    
    printf("\nHere are the benefits of your %s account:\n", bank);
    switch (c) 
	{
        case 1:
            printf("- Earn interest on your savings\n");
            printf("- Easy online banking\n");
            break;
        case 2:
            printf("- Overdraft protection\n");
            printf("- Online bill payment\n");
            break;
        case 3:
            printf("- Trade in securities easily\n");
            printf("- Convenient and secure\n");
            break;
    }
    return 0;
}
