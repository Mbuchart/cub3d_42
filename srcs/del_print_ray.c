#include "../includes/cub3d.h"

void	print_ray(t_data *data, int color)
{
	float i;

	i = 0;
	if (data->posx / 6 < data->rx / 6 && data->posy / 6 < data->ry / 6)
	{
		while (data->posx / 6 + data->rpdx * i < data->rx / 6
				&& data->posy / 6 + data->rpdy * i < data->ry / 6)
		{
			my_mlx_pixel_put(data, (data->posx / 6 + data->rpdx * i),
								(data->posy / 6 + data->rpdy * i), color);
			i += 0.1;
		}
	}
	else if (data->posx / 6 > data->rx / 6 && data->posy / 6 > data->ry / 6)
	{
		while (data->posx / 6 + data->rpdx * i > data->rx / 6
				&& data->posy / 6 + data->rpdy * i > data->ry / 6)
		{
			my_mlx_pixel_put(data, (data->posx / 6 + data->rpdx * i),
								(data->posy / 6 + data->rpdy * i), color);
			i += 0.1;
		}
	}
	else if (data->posx / 6 > data->rx / 6 && data->posy / 6 < data->ry / 6)
	{
		while (data->posx / 6 + data->rpdx * i > data->rx / 6
				&& data->posy / 6 + data->rpdy * i < data->ry / 6)
		{
			my_mlx_pixel_put(data, (data->posx / 6 + data->rpdx * i),
								(data->posy / 6 + data->rpdy * i), color);
			i += 0.1;
		}
	}
	else if (data->posx / 6 < data->rx / 6 && data->posy / 6 > data->ry / 6)
	{
		while (data->posx / 6 + data->rpdx * i < data->rx / 6
				&& data->posy / 6 + data->rpdy * i > data->ry / 6)
		{
			my_mlx_pixel_put(data, (data->posx / 6 + data->rpdx * i),
								(data->posy / 6 + data->rpdy * i), color);
			i += 0.1;
		}
	}
}

