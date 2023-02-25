#include<stdio.h>
main()
{
  int a;                                  //variable declaration
  a=10;                                   //Defining the variable
  const float pi=3.14;                    //Defining a const value
  if(a>5)                                 //if,else if and else are keywords
    printf("%d is greater than 5",a);
  else if(a==5)
    printf("%d is equal to 5",a);
  else
    printf("%d is smaller than 5",a);
}
