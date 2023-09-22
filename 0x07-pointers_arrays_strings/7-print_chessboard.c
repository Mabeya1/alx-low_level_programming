#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - A function that prints out a chessboard
 *
 *@a - The 8 column chessboard to be printed
 *
 */

void print_chessboard(char (*a)[8])

{
	int fanC, lenC = 0;
	

	for (; lenC < 8 ;)
	{
		fanC = 0;
		for (; fanC < 8 ;)
			putchar (a[lenC][fanC]);
		fanC++;
		putchar ('\n');
		lenC++;	
	}
}
