#ifndef FRACT_OL_H
#define FRACT_OL_H
# define ESC_KEY 65307
# define SCROLL_DOWN 5
# define SCROLL_UP 4
# define LEFT_CLICK 1
# define WIN_X 1920 / 2
# define WIN_Y 1080 / 2
# define SCALE_MAX 10
# define SCALE_MIN -10
# define COLOR 0x00FF0000
# include </home/oakhmouc/minilibx-linux/mlx.h>
# include <math.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stddef.h>

typedef struct	w_data
{
	void	*mlx;
	void	*win;
}				w_data;

typedef struct	s_data {
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}				t_data;

int		esc_close(int the_code, w_data window);
int 	close_x(w_data *window);
char	*get_the_info(t_data image);
void	draw_in_image(t_data *image, int x, int y, int color);
void	draw_circle(t_data *image, int cx, int cy, int radius);
int		zoom_in(int the_code, t_data *image);
int		cord_x(int x);
int		cord_y(int y);
int		motion_p(int the_code, int x, int y, w_data window);
int		cross_close(w_data window);

#endif
