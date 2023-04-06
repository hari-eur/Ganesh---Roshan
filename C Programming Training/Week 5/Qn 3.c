#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 1000

void encrypt(char *input_file, char *output_file);
void decrypt(char *input_file, char *output_file);

main() 
{
    char choice, input_file[MAX_SIZE], output_file[MAX_SIZE];
    do 
    {
        printf("Enter E to encrypt, D to decrypt, or Q to quit: ");
        scanf(" %c", &choice);
        switch (choice) 
        {
            case 'E':
            case 'e':
                printf("Enter the file to be encrypted: ");
                scanf("%s", input_file);
                printf("Enter the name of the encrypted file: ");
                scanf("%s", output_file);
                encrypt(input_file, output_file);
                printf("Encrypted file is %s\n", output_file);
                break;
            case 'D':
            case 'd':
                printf("Enter the file to be decrypted: ");
                scanf("%s", input_file);
                printf("Enter the name of the decrypted file: ");
                scanf("%s", output_file);
                decrypt(input_file, output_file);
                printf("Decrypted file is %s\n", output_file);
                break;
            case 'Q':
            case 'q':
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
                break;
        }
    } while (choice != 'Q' && choice != 'q');
}

void encrypt(char *input_file, char *output_file) 
{
    FILE *input, *output;
    char ch;
    input = fopen(input_file, "r");
    output = fopen(output_file, "w");
    if (input == NULL || output == NULL) 
    {
        printf("Error opening file!\n");
        exit(1);
    }
    while ((ch = fgetc(input)) != EOF) 
    {
        ch += 3; // encryption logic (shift each character by 3)
        fputc(ch, output);
    }
    fclose(input);
    fclose(output);
}

void decrypt(char *input_file, char *output_file) 
{
    FILE *input, *output;
    char ch;
    input = fopen(input_file, "r");
    output = fopen(output_file, "w");
    if (input == NULL || output == NULL) 
    {
        printf("Error opening file!\n");
        exit(1);
    }
    while ((ch = fgetc(input)) != EOF) 
    {
        ch -= 3; // decryption logic (shift each character back by 3)
        fputc(ch, output);
    }
    fclose(input);
    fclose(output);
}
