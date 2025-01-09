#ifndef FRACT_OL_H
#define FRACT_OL_H
# define ESC_KEY 65307
# define SCROLL_DOWN 5
# define SCROLL_UP 4
# define LEFT_CLICK 1
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

int	esc_close(int the_code, w_data window);
int close_x(w_data *window);

#endif
