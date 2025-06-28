/*
This program shows how to access and print the **memory address** and **value** of an integer variable using basic C syntax.

What It Does
- Declares an integer variable `i` and assigns it a value.
- Prints the **memory address** of the variable using `&i`.
- Prints the **value** of the variable.
*/
#include<stdio.h>
int main(){
    int i=3;
    printf("Address of i=%u\n",&i);
    printf("Value of i=%u",i);
    return 0;
}