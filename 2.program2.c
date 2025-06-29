/*
  Purpose : This simple program demonstrates how to:
            - Print the memory address of a variable using the '&' (address-of) operator
            - Access the value of the variable directly
            - Access the value using a pointer (by dereferencing the address)
  
  Output Example:
      Address of i=6422044
      Value of i=3value of i=3
 */
#include<stdio.h>
int main(){
    int i=3;
    printf("Address of i=%u\n",&i);
    printf("Value of i=%d",i);
     printf("value of i=%d\n",*(&i));

    return 0;
}