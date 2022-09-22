#include <stdio.h>
/**
 * main - main block
 * description: Bitwise Operators
 * Bitwise Operators - special operators used in bit level programming (knowing binary is important for this topic)
 * Return: 0
 */
int main(void)
{
    /**
     * & = AND
     * | = OR
     * ^ = XOR
     * << = Left shift
     * >> = Right shift
     */
    int x = 6; // 6 = 00000110
    int y = 12; // 12 = 00001100
    int z = 0; // 0 = 00000000

    z = x & y; // both have to true(1) to be 1
    // x: 6 = 00000110
    // y:12 = 00001100
    // z:   = 00000100
    printf("AND = %d\n", z);

    z = x | y; // either has be true(1) to be 1
    // x: 6 = 00000110
    // y:12 = 00001100
    // z:   = 00001110
    printf("OR = %d\n", z);

    z = x ^ y; // only one can be true(1) to be 1
    // x: 6  =  00000110
    // y: 12 =  00001100
    // z: 14 =  00001010
    printf("XOR = %d\n", z);

    z = x << 1; // shift to left by once(0)
    // x: 6  =  00000110
    // z: 12 =  00001100
    printf("SHIFT LEFT = %d\n", z);

    z = x >> 1; // shift to right by once(0)
    // x: 6  =  00000110
    // z: 12 =  00000011
    printf("SHIFT RIGHT = %d\n", z);
    
    return 0;
}
