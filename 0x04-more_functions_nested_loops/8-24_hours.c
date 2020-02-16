#include "holberton.h"
#include <stdio.h>
void jack_bauer(void)
{
	int hours = 0;
	while(hours < 24)
	{
		int min;
		for (min = 0; min < 60; min++)
		{
			printf("%d:", hours);
			printf("%d", min);
			printf("\n");
		}
		hours++;
	}
}
