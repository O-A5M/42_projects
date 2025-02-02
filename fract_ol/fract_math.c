#include "fract_ol.h"

double	fract_equat(f_data cords)
{
	int		iter;
	double	i;
	double	x;
	double	y;
	f_data	cords;

	iter = 100;
	i = 0;
	x = 0;
	y = 0;
	while ()
}

double	im_pow(f_data *cords)
{
	cords -> x = (cords -> x * cords -> x) + (2 * cords -> x) + (cords -> y * cords -> y);
	cords -> y = 2 * cords -> y;
}

double	im_add(f_data *cords, double x, double y)
{
	cords -> x = cords -> x + x;
	cords -> y = cords -> y + y;
}

double	pixel_to_cord(double z)
{
	double ret;

	ret = z * SCALE_MAX + WIN_X / 2;
	return (ret);
}

double	cord_to_pixel(double z)
{
	double	ret;

	ret = z * SCALE_MAX - WIN_X / 2;
	return (ret);
}
