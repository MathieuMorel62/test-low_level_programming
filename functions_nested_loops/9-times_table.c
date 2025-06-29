#include "main.h"

void times_table(void)
{
	int col;
	int line;
	int result;

	for (col = 0; col <= 9; col++)
	{
		for (line = 0; line <= 9; line++)
		{
			result = line * col;
			if (line != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (result <= 9)
					_putchar(' ');
			}

			if (result <= 9)
				_putchar('0' + result);
			else
			{
				_putchar('0' + result / 10);
				_putchar('0' + result % 10);
			}
		}
		_putchar('\n');
	}
}
