#include "holberton.h"
#include <stdio.h>

void format_time(int num)
{
	if (num < 10)
	{
		printf("0%d", num);
	}
	else
	{
		printf("%d", num);
	}
}
void jack_bauer(void)
{
	int hours = 0;
	while(hours < 24)
	{
		int min;
		for (min = 0; min < 60; min++)
		{
			format_time(hours);
			printf(":");
			format_time(min);
			printf("\n");
		}
		hours++;
	}
}
