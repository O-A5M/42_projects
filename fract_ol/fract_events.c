#include "fract_ol.h"

int	esc_close(int the_code, t_data *window)
{
	if (the_code == ESC_KEY)
	{
		mlx_destroy_image(window -> mlx, window -> img);
		mlx_destroy_window(window -> mlx, window -> win);
		mlx_destroy_display(window -> mlx);
		free(window -> mlx);
		free(window);
		exit(0);
	}
	return (0);
}

int	cross_close(t_data *window)
{
	mlx_destroy_image(window -> mlx, window -> img);
	mlx_destroy_window(window -> mlx, window -> win);
	mlx_destroy_display(window -> mlx);
	free(window -> mlx);
	free(window);
	exit(0);
	return (0);
}

int	motion_p(int the_code, int x, int y, t_data window)
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
