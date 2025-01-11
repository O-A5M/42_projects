#include "fract_ol.h"

void	draw_in_image(t_data image, int x, int y, int color)
{
	char	*cord;

	image.addr = mlx_get_data_addr(&image.img, &image.bits_per_pixel, &image.line_length, &image.endian);
	cord = image.addr + (y * image.line_length + x * (image.bits_per_pixel / 8));
	*(unsigned int *)cord = color;
}

void	draw_a_circle(t_data image, int x, int y)
{
	int	radius;
	int	a;
	int	b;

	a = 0;
	b = 0;
	radius = 100;
	while (a <= WIN_X)
	{
		b = 0;
		while (b <= WIN_Y)
		{
			if ((a - x) * (a - x) + (b - y) * (b - y) <= radius * radius)
			{
				draw_in_image(image, a, b, COLOR);
				b++;
			}
		}
		a++;
	}
}

int	main()
{
	w_data	window;
	t_data	image;

	window.mlx = mlx_init();
	window.win = mlx_new_window(window.mlx, WIN_X, WIN_Y, "Fract-ol");
	image.img = mlx_new_image(window.mlx, WIN_X, WIN_Y);
	draw_a_circle(image, WIN_X, WIN_Y);
	mlx_put_image_to_window(window.mlx, window.win, image.img, 0, 0);
	mlx_key_hook (window.win, esc_close, window.mlx);
	mlx_hook (window.win, 17, 0, close_x, window.mlx);
	mlx_loop (window.mlx);
}
