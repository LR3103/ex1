/******************
Name: Lior Rogov
ID: 215303207
Assignment: excercise 1
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE. not even "==, &&, ||, !="


int main()
{

    // Ascii
    printf("Ascii:\n");
    printf("Please enter a character\n");
    /*. Scan one character from the user.
        Then, refer to it as an integer.
        a. Print its value.
        b:
        Print “0”, if its integer representation is even.
        print “1” if its integer representation is odd. */

    char x; 
    scanf(" %c", &x);
    printf("Its numerical value is: %d\n", x);
    printf("0 for even, 1 for odd: %d\n", x & 1);

    // 2's complement and other representations
    printf("\n2's complement to other representations:\n");
    /*. Scan a negative integer. [2’s complement].
        Print its value in 1’s complement.
        Print its value as unsigned. */

    int negativeNumber;
    printf("Please enter a negative integer \n");
    scanf(" %d", &negativeNumber);
    printf("1's complement: %d\n", -(~negativeNumber));
    printf("unsigned: %u\n", negativeNumber);

    // Shifting right and left
    printf("\nShifting right and left:\n");
    /*. Scan 3 integers.
        The first one - the value you will play with.
        The second and the third - how much to shift right and left, respectively.
        Print the value after shifting right and then shifting left. */

    int shiftableNumber, rightShiftInt, leftShiftInt;
    printf("Please enter 3 integers \n");
    scanf(" %d %d %d", &shiftableNumber, &rightShiftInt, &leftShiftInt);
    int shiftResult = (shiftableNumber >> rightShiftInt) << leftShiftInt;
    printf("After shifting right and left: %d\n\n", shiftResult);

    // Even - Odd
    printf("\nEven - Odd:\n");
    /* Scan 3 Integers.
    If at least two of them are even - print 0.
    If at least two of them are odd - print 1. */

    int a, b, c;
    printf("Please enter 3 integers \n");
    scanf(" %d %d %d", &a, &b, &c);
    int conditionResult = ((a&b) | (a&c) | (b&c))&1;
    printf("0 - most of them are even, 1 - most of them are odd: %d\n", conditionResult);

    // Different Bases
    printf("\nDifferent Bases:\n");
    /*  Scan two numbers:
        One in octal base, one in Hexadecimal base.
        Print their LSB’s.
        Print their MSB’s. */
        unsigned int octalNumber, hexNumber;
        printf("Please enter two numbers in octal and hexadecimal bases \n");
        scanf(" %o %x", &octalNumber, &hexNumber);
        const int shiftNumber = 31;
        const unsigned msbBitOn = 1 << shiftNumber; // 10000000
        printf("LSBs: %u %u \n", octalNumber & 1, hexNumber & 1);
        printf("MSBs: %u %u\n", (octalNumber &  msbBitOn) >> shiftNumber, (hexNumber &  msbBitOn) >> shiftNumber);

    printf("Bye!\n");

    return 0;
}
