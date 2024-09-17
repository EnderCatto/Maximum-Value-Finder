#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int a, b, c, max;
    printf("Enter 3 distinct integers: ");  // Prints the string "Enter 3 distinct integers:" to the console
    scanf("%d %d %d", &a, &b, &c);  // Reads three values from input into variables a, b, c

    if (a == b && b == c && c == a)
        return printf("You entered THREE EQUAL numbers, it is not possible to determine the maximum of 3 numbers!!!");
    else
        if (a == c || a == b || b == c)
            return printf("You entered TWO EQUAL numbers, it is not possible to determine the maximum of 3 numbers!!!");
        else
            if (a > b)  // If a > b 
                max = a;  // Set max to a
            else    // Otherwise
                max = b;  // Set max to b
    if (max < c)  // If max < c
        max = c;  // Set max to c

    printf("The maximum number is %d\n", max);  // Print the value of the variable 'max' to the console

    return 0;
}