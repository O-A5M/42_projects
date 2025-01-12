#include "fract_ol.h"

void	draw_in_image(t_data *image, int x, int y, int color)
{
	char	*pixel;

	pixel = image -> addr + (y * image -> line_length + x * (image -> bits_per_pixel / 8));
	*(unsigned int *)pixel = color;
}

char	*get_the_info(t_data image)
{
	image.addr = mlx_get_data_addr(&image.img, &image.bits_per_pixel, &image.line_length, &image.endian);
	return (image.addr);
}

void	draw_circle(t_data image, int cx, int cy, int radius)
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
				draw_in_image(&image, x, y, COLOR);
			y++;
		}
		x++;
	}
}
