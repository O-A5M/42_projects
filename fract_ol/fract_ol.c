#include "fract_ol.h"

int	main()
{
	w_data	window;
	t_data	image;

	window.mlx = mlx_init();
	window.win = mlx_new_window(window.mlx, WIN_X, WIN_Y, "Fract-ol");
	image.img = mlx_new_image(window.mlx, WIN_X, WIN_Y);
	image.addr = mlx_get_data_addr(image.img, &image.bits_per_pixel, &image.line_length, &image.endian);
	draw_circle(&image, cord_x(0), cord_y(0), 150);
	mlx_put_image_to_window(window.mlx, window.win, image.img, 0, 0);
	mlx_key_hook(window.win, esc_close, window.mlx);
	mlx_hook(window.win, 4, 1L>>2, motion_p, window.mlx);
	mlx_hook(window.win, 17, 0, cross_close, window.mlx);
	mlx_loop(window.mlx);
}
