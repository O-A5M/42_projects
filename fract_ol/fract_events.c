#include "fract_ol.h"

int	esc_close(int the_code, w_data window)
{
	if (the_code == ESC_KEY)
	{
		write(1, "bey", 3);
		mlx_destroy_window (window.mlx, window.win);
	}
	return (0);
}

int	mouse_enter(int the_code, int x, int y, w_data window)
{
	if ((x <= 1920 && x >= 0) && (y <= 1080 && y >= 0)
		&& (the_code == LEFT_CLICK))
	{
		mlx_clear_window(window.mlx, window.win);
		mlx_destroy_window(window.mlx, window.win);
	}
	return (0);
}
