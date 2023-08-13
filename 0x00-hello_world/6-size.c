#include<stdio.h>
/**
 * main - Prints the size of various types based on 
 * the computer it is compiled and run on..
 * Return: Always 0 (Success)
 */
int main(void)
{
        printf("size of a char: %d byte(s)\n", sizeof(char));
        printf("size of an int: %d byte(s)\n", sizeof(int));
        printf("size of a long int: %d byte(s)\n", sizeof(long int));
        printf("size of a float: %d byte(s)\n", sizeof(float));
        return (0);
}
