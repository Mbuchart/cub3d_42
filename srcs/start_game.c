#include "../includes/cub3d.h"

char	**new_map(void)
{
	char **tmp;
	int i;

	tmp = malloc(sizeof(char*) * 18);
	i = 0;
	while (i < 17)
	{
		tmp[i] = malloc(sizeof(char) * 50);
		i++;
	}
	tmp[17] = NULL;
	tmp[0]  = "111111111111111111111111111";
	tmp[1]  = "100000000000111000000111111";
	tmp[2]  = "100000000000000000000000011";
	tmp[3]  = "100000000000000000000000011";
	tmp[4]  = "111111111111000111111000001";
	tmp[5]  = "110000011000000000000000011";
	tmp[6]  = "100000010000000000000000011";
	tmp[7]  = "100000000000000000011000001";
	tmp[8]  = "100000000000000000100000001";
	tmp[9]  = "100000000000000000000000001";
	tmp[10] = "110000000000000000011111111";
	tmp[11] = "110100000000000000011111111";
	tmp[12] = "111100000000000000111111111";
	tmp[13] = "111100000000000000000111111";
	tmp[14] = "111110000000000000000111111";
	tmp[15] = "111100000000000000000011111";
	tmp[16] = "111111111111111111111111111";

	return (tmp);
}

float	rgbtohex(int r, int g, int b)
{
	return (r << 16 | g << 8 | b);
}

float	dir_pos(t_cub *cub)
{
	if (cub->sp_dir == 'N')
		return (P3);
	if (cub->sp_dir == 'S')
		return (P2);
	if (cub->sp_dir == 'W')
		return (PI);
	if (cub->sp_dir == 'E')
		return (0);
	return (0);
}

void	data_init(t_data *data, t_cub *cub)
{
	data->so = cub->south;
	data->no = cub->north;
	data->we = cub->west;
	data->ea = cub->east;
	data->colorc = rgbtohex(cub->ceiling[0], cub->ceiling[1], cub->ceiling[2]);
	data->colorf = rgbtohex(cub->floor[0], cub->floor[1], cub->floor[2]);
	data->w = 0;
	data->a = 0;
	data->s = 0;
	data->d = 0;
	data->gau = 0;
	data->dro = 0;
	data->disth = -1;
	data->distv = -1;
	data->mh = WIN_H;
	data->ml = WIN_L;
	data->mapx = cub->width;		// jsp pourquoi mais x et y inverser 
	data->mapy = cub->height;	// map[mapy][mapx]
	data->resx = 64;					// init resolution of each square of the map
	data->resy = 64;					// here 60 is the resolution of each square of the map
	data->posx = 32 + cub->spawnx * data->resx;	// init player position in the map.
	data->posy = 32 + cub->spawny * data->resy;	// here 4 is the initial pos
	data->pa = dir_pos(cub);
	data->pdx = cos(data->pa) * 1.5;
	data->pdy = sin(data->pa) * 1.5;
}

int	ft_exit(t_data *data)
{
	mlx_destroy_image(data->mlx, data->img);
	mlx_destroy_window(data->mlx, data->win);
	exit(0);
	return (1);
}

void	start_game(t_cub *cub)
{
	t_data	data;
	(void)cub;

	data.map = cub->map;
	data_init(&data, cub);
	data.mlx = mlx_init();
	data.win = mlx_new_window(data.mlx, data.ml, data.mh, "cub3D");
	data.img = mlx_new_image(data.mlx, data.ml, data.mh);
	data.addr = mlx_get_data_addr(data.img, &data.bits_per_pixels,
			&data.line_length, &data.endian);
	load_texture(&data);
	draw_rays3d(&data);
	draw_map_2d(&data, data.map);
	mlx_put_image_to_window(data.mlx, data.win, data.img, 0, 0);
	mlx_hook(data.win, 2, HOOK_KEY_PRESSED, &hook_pressed, &data);
	mlx_hook(data.win, 3, HOOK_KEY_RELEASED, &hook_released, &data);
	mlx_hook(data.win, 33, 1L << 17, &ft_exit, &data); //1L << 17 : j'ai ajouté des espaces des deux cotés du "<<" (norminette oblige)...
	mlx_loop_hook(data.mlx, &next_frame, &data);
	mlx_loop(data.mlx);
}
