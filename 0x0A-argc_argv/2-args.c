#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: Count the arguments
 * @argv: Arguments
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{

/*declaring variables*/
int count = 0;

if (argc > 0)
{
/*WHILE - Print each arguments*/
while (count < argc)
{
printf("%s\n", argv[count]);
count++;
}
}
return (0);
}
