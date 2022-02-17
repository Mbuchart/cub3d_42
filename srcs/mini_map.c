#include "../includes/cub3d.h"

void	free_strs(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
}

void	find_div(t_data *data)
{
	int	i;

	i = 0;
	if (data->mapx > data->mapy)
		i = data->mapx;
	else
		i = data->mapy;
	data->div = data->resx * i / 150;
}

void	put_player(t_data *data, int x, int y)
{
	int		i;
	int		j;
	float	k;

	i = -2;
	while (i <= 2)
	{
		j = -2;
		while (j <= 2)
		{
			my_mlx_pixel_put(data, x + j, y + i, 0x00FFFF00);
			j++;
		}
		i++;
	}
	k = 0;
	while (k < 5)
	{
		if ((x + data->pdx * k) >= 0 && (y + data->pdy * k) >= 0)
			my_mlx_pixel_put(data, (x + data->pdx * k),
				(y + data->pdy * k), 0x00FFFF00);
		k += 0.1;
	}
}

void	draw_map_2d2(t_data *data, int x, int y, int color)
{
	int	i;
	int	j;

	i = 0;
	while (i <= data->resx / data->div)
	{
		j = 0;
		while (j <= data->resy / data->div)
		{
			my_mlx_pixel_put(data, (x * data->resx / data->div) + i,
				(y * data->resy / data->div) + j, color);
			j++;
		}
		i++;
	}
}

void	draw_map_2d(t_data *data, char **map)
{
	int	x;
	int	y;

	x = 0;
	find_div(data);
	while (map[x] != NULL)
	{
		y = 0;
		while (map[x][y])
		{
			if (map[x][y] == '1')
				draw_map_2d2(data, x, y, 0x00FF0000);
			if (map[x][y] == '0')
				draw_map_2d2(data, x, y, 0x00FF8888);
			y++;
		}
		x++;
	}
	put_player(data, data->posx / data->div, data->posy / data->div);
}
