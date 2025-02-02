#include "fract_ol.h"

int	main()
{
	t_data	*window;

	window = malloc(sizeof(t_data));
	if (!window)
		return (1);
	window -> mlx = mlx_init();
	window -> win = mlx_new_window(window -> mlx, WIN_X, WIN_Y, "Fract-ol");
	window -> img = mlx_new_image(window -> mlx, WIN_X, WIN_Y);
	window -> addr = mlx_get_data_addr(window -> img, &window -> bits_per_pixel, &window -> line_length, &window -> endian);
	mlx_put_image_to_window(window -> mlx, window -> win, window -> img, 0, 0);
	mlx_key_hook(window -> win, esc_close, window);
	mlx_hook(window -> win, 4, 1L>>2, motion_p, window);
	mlx_hook(window -> win, 17, 0, cross_close, window);
	mlx_loop(window -> mlx);
}
