#include "../includes/cub3d.h"

void	free_strs(char **str)
{
	int i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
}

void	put_player(t_data *data, int x, int y)
{
	int i;
	int j;
	float k;

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
		my_mlx_pixel_put(data, (x + data->pdx * k),
						(y + data->pdy * k), 0x00FFFF00);
		k += 0.1;
	}
}

void	draw_map_2d2(t_data *data, int x, int y, int color)
{
	int i;
	int j;

	i = 0;
	while (i <= data->resx / 6)
	{
		j = 0;
		while (j <= data->resy / 6)
		{
			my_mlx_pixel_put(data, (x * data->resx / 6) + i,
					(y * data->resy / 6) + j, color);
			j++;
		}
		i++;
	}
}

void	draw_map_2d(t_data *data, char **map)
{
	int	x;
	int	y;
	int	color;

	x = 0;
	color = 0x00FF0000;
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
}