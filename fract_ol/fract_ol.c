#include "fract_ol.h"

int	main()
{
	w_data	window;
	t_data	image;

	window.mlx = mlx_init();
	window.win = mlx_new_window(window.mlx, WIN_X, WIN_Y, "Fract-ol");
	image.img = mlx_new_image(window.mlx, WIN_X, WIN_Y);
	image.addr = mlx_get_data_addr(image.img, &image.bits_per_pixel, &image.line_length, &image.endian);
	draw_circle(&image, 50, 50, 50);
	mlx_put_image_to_window(window.mlx, window.win, image.img, 0, 0);
	mlx_loop(window.mlx);
}
