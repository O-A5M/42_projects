#include "fract_ol.h"

void	draw_in_image(t_data *window, int x, int y, int color)
{
	char	*pixel;

	pixel = window -> addr + (y * window -> line_length + x * (window -> bits_per_pixel / 8));
	*(unsigned int *)pixel = color;
}

char	*get_the_info(t_data window)
{
	window.addr = mlx_get_data_addr(&window.img, &window.bits_per_pixel, &window.line_length, &window.endian);
	return (window.addr);
}

void	draw_circle(t_data *window, int cx, int cy, int radius)
{
	int	x;
	int	y;

	x = 0;
	while (x < WIN_X)
	{
		y = 0;
		while (y < WIN_Y)
		{
			if ((cx - x) * (cx - x) + (cy - y) * (cy - y) <= radius * radius)
				draw_in_image(window, x, y, 0x0000FF00);
			else
				draw_in_image(window, x, y, 0x00FF0000);
			y++;
		}
		x++;
	}
}
