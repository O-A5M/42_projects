#include "fract_ol.h"

int	cord_x(int x)
{
	int	ret;

	ret = (WIN_X / 2) + x * (WIN_X / (SCALE_MAX - SCALE_MIN));
	return (ret);
}

int	cord_y(int y)
{
	int	ret;

	ret = ((WIN_Y / 2) + y * (WIN_X / (SCALE_MAX - SCALE_MIN)));
	return (ret);
}
