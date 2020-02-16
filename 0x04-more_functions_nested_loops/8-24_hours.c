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
			if (hours < 10)
			{
				printf("0%d:", hours);
			}
			else
			{
				printf("%d:", hours);
			}
			if (min < 10)
			{
				printf("0%d", min);
			}
			else
			{
				printf("%d", min);
		        }
			printf("\n");
		}
		hours++;
	}
}
