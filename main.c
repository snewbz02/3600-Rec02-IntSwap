/*
Created by Sienna Newby-Sanchez

Goal: Create a C program that accepts any two integers
and swaps both integers using bitwise operators without a third variable.

We will be using the bitwise XOR operator to swap the integers as the bitwise XOR
operator evaluates each bit of the result to 1. 

Class: 3600.004-208
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *int_ptr;
    int_ptr = (int *)malloc(2 * sizeof(int)); // Allocate memory for two integers

    if (int_ptr == NULL) {
        printf("Memory allocation failed. Exiting program.\n");
        return 1;
    }

    // Prompt the user to enter the first integer
    printf("Enter the first integer: ");
    scanf("%d", &int_ptr[0]);

    // Prompt the user to enter the second integer
    printf("Enter the second integer: ");
    scanf("%d", &int_ptr[1]);

    // Print the original values
    printf("Original values: First integer = %d, Second integer = %d\n", int_ptr[0], int_ptr[1]);

    // Swap the values using bitwise XOR
    int_ptr[0] ^= int_ptr[1];
    int_ptr[1] ^= int_ptr[0];
    int_ptr[0] ^= int_ptr[1];
    
    return 0;
}
