#ifndef FRACT_OL_H
#define FRACT_OL_H
# define ESC_KEY 65307
# define SCROLL_DOWN 5
# define SCROLL_UP 4
# define LEFT_CLICK 1
# define WIN_X 1920 / 2
# define WIN_Y 1920 / 2
# define SCALE_MAX 10
# define SCALE_MIN -10
# define COLOR 0x00FF0000
# include </home/oakhmouc/minilibx-linux/mlx.h>
# include <math.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stddef.h>

typedef struct	s_data {
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
	void	*mlx;
	void	*win;
	int		height;
	int		width;
}				t_data;

typedef struct	f_data
{
	double	x;
	double	y;
}				f_data;

int		esc_close(int the_code, t_data *window);
int 	close_x(t_data *window);
char	*get_the_info(t_data image);
void	pixel_to_image(t_data *image, int x, int y, int color);
void	draw_circle(t_data *image, int cx, int cy, int radius);
int		zoom_in(int the_code, t_data *image);
int		cord_x(int x);
int		cord_y(int y);
int		motion_p(int the_code, int x, int y, t_data window);
int		cross_close(t_data *window);
void	fract_equat(t_data *window);

#endif
