#include "fract_ol.h"

int	main()
{
	w_data	window;

	window.mlx = mlx_init();
	window.win = mlx_new_window(window.mlx, 1920, 1080, "Fract-ol");
	mlx_mouse_hook (window.win, mouse_enter, window.mlx);
	mlx_key_hook (window.win, esc_close, window.mlx);
	mlx_loop (window.mlx);
}
