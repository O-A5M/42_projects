#include "fract_ol.h"

void	pixel_to_image(t_data *window, int x, int y, int color)
{
	char	*addr;

	addr = window -> addr + (y * window -> line_length + x * (window -> bits_per_pixel / 8));
	*(unsigned int *)addr = color;
}
