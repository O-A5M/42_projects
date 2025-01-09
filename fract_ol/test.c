#include "/home/oakhmouc/minilibx-linux/mlx.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "fract_ol.h"

typedef struct	s_data
{
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}				t_data;

typedef struct
{
	void	*win;
	void	*mlx;
}				w_data;

int	close_win(int keycode, w_data window)
{
	if (keycode == ESC_KEY)
	{
		mlx_destroy_window(window.mlx, window.win);
		exit (0);
	}
	return (0);
}

void	put_pixel(t_data *data, int x, int y, int color)
{
	char	*pxl;

	pxl = data -> addr + (y * data -> line_length + x * (data -> bits_per_pixel / 8));
	*(unsigned int*)pxl = color;
}

void	printing_pxls(int cx, int cy, int r, t_data image)
{
	int	x;
	int	y;

	x = 0;
	while (x < 1920)
	{
		y = 0;
		while (y < 1080)
		{
			if (((x-cx) * (x-cx) + (y-cy) * (y-cx)) <= r * r)
				put_pixel(&image, x, y, 0x00FF0000);
			else
				put_pixel(&image, x, y, 0x000000FF);
			y++;
		}
		x++;
	}
}

void	window_alt()
{
	t_data	image;
	w_data	window;
	int		x;
	int		y;

	x = 0;
	window.mlx = mlx_init();
	window.win = mlx_new_window(window.mlx, 1920, 1080, "new window");
	image . img = mlx_new_image(window.mlx, 1920, 1080);
	image . addr = mlx_get_data_addr(image.img, &image.bits_per_pixel, &image.line_length, &image.endian);
	printing_pxls(1920 / 2, 1080 / 4, 100, image);
	mlx_put_image_to_window(window.mlx, window.win, image.img, 0, 0);
	mlx_hook (window.win, 2, 1L<<0, close_win, &window);
	mlx_loop(window.mlx);
}

int	main()
{
	window_alt();
}
