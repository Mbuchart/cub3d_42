#include "../includes/cub3d.h"

void	free_tex(t_data *data, t_mlx *tex, int i)
{
	while (i < 1)
	{
		if (tex[i].img)
			mlx_destroy_image(data->mlx, tex[i].img);
		i++;
	}
	printf("Failed to load texture\n");
    exit(0);        // ft_exit!!
}

void	bufferize_texture(t_data *data, t_mlx *tex, int *dst)
{
	int		x;
	int		y;

	x = 0;
	while (x < TEX_W)
	{
		y = 0;
		while (y < TEX_H)
		{
			dst[TEX_H * x + y] = mlx_pixel_get(tex, x, y);
			y++;
		}
		x++;
	}
	mlx_destroy_image(data->mlx, tex->img);
}

void	load_more_texture(t_data *data, t_mlx *tex)
{
	int		i;

	// tex[4].img = mlx_xpm_file_to_image(data->mlx, "./textures/wood.xpm",
	// 	&tex[4].x, &tex[4].y);
	// tex[5].img = mlx_xpm_file_to_image(data->mlx, "./textures/pillar.xpm",
	// 	&tex[5].x, &tex[5].y);
	// tex[6].img = mlx_xpm_file_to_image(data->mlx, "./textures/greenlight.xpm",
	// 	&tex[6].x, &tex[6].y);
	i = 0;
	while (i < 1)
	{
		if (!tex[i].img)
			free_tex(data, tex, i);
		tex[i].addr = mlx_get_data_addr(tex[i].img,
			&tex[i].bpp, &tex[i].len, &tex[i].endian);
		bufferize_texture(data, &tex[i], data->tex[i]);
		i++;
	}
}

void	init_tex(t_mlx *tex)
{
	int		i;

	i = 0;
	while (i < 1)
		tex[i++].img = NULL;
}

void	load_texture(t_data *data)
{
	t_mlx	tex[8];

	init_tex(tex);
	tex[0].img = mlx_xpm_file_to_image(data->mlx, "./textures/eagle.xpm",
		&tex[0].x, &tex[0].y);
	// tex[1].img = mlx_xpm_file_to_image(data->mlx, data->no,
	// 	&tex[1].x, &tex[1].y);
	// tex[2].img = mlx_xpm_file_to_image(data->mlx, data->we,
	// 	&tex[2].x, &tex[2].y);
	// tex[3].img = mlx_xpm_file_to_image(data->mlx, data->ea,
	// 	&tex[3].x, &tex[3].y);
	load_more_texture(data, tex);
}