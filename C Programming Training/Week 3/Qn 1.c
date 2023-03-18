#include <stdio.h>
#define print(fmt, ...) printf(fmt, ##__VA_ARGS__)

main() 
{
  char data[] = "EmbedUR";
  char data_1[] = "User";
  char data_2[] = "C Programming";
  print("Welcome to %s\n", data);
  print("Hello to %s: Welcome to %s\n", data_1, data_2);
}
