#include "fract_ol.h"

int	esc_close(int the_code, w_data window)
{
	if (the_code == ESC_KEY)
	{
		mlx_clear_window(window.mlx, window.win);
		mlx_destroy_window (window.mlx, window.win);
	}
	return (0);
}

int	close_x(w_data *window)
{
	mlx_destroy_window(window->mlx, window->win);
	return (0);
}
