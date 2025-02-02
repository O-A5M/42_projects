#include "fract_ol.h"


void	im_pow(f_data *cords)
{
	cords -> x = (cords -> x * cords -> x) + (2 * cords -> x) + (cords -> y * cords -> y);
	cords -> y = 2 * cords -> y;
}

void	im_add(f_data *cords, double x, double y)
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

void	fract_equat(t_data *window)
{
	int		iter;
	int		i;
	double	x;
	double	y;
	f_data	cords;

	i = 0;
	x = 0;
	im_add(&cords, 0, 0);
	while (x < WIN_X)
	{
		y = 0;
		while (y < WIN_Y)
		{
			iter = 100;
			while (iter >= 0)
			{
				im_pow(&cords);
				im_add(&cords, cord_to_pixel(x), cord_to_pixel(y));
				if (cords.x > 2 || cords.y > 2)
				{
					pixel_to_image(window, x, y, 0x00FFFFFF);
					i = 1;
					break ;
				}
				iter--;
			}
			if (i == 0)
			{
				pixel_to_image(window, x, y, 0x00FFFFFF);
				cords.x = 0;
				cords.y = 0;
				im_add(&cords, cord_to_pixel(x), cord_to_pixel(y));
			}
			y++;
		}
		x++;
	}
}
