#include "fract_ol.h"

int	esc_close(int the_code, w_data window)
{
	(void)window.mlx;
	if (the_code == ESC_KEY)
	{
		printf("hello");
		fflush(NULL);
		exit(0);
	}
	return (0);
}

int	cross_close(w_data window)
{
	(void)window.mlx;
	exit(0);
	return (0);
}

int	motion_p(int the_code, int x, int y, w_data window)
{
	x = y;
	y = x;
	if (the_code == LEFT_CLICK)
	{
		(void)window.mlx;
		perror("the address is: (%d, %d)\n");
	}
	return (0);
}
//	fflush(NULL);
