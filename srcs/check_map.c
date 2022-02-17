/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjullien <cjullien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 12:13:17 by cjullien          #+#    #+#             */
/*   Updated: 2022/02/16 10:20:46 by cjullien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

void	flood_fill_algo(t_cub *cub, int limit, int x, int y)
{
	if (!cub->map[x][y] || cub->map[x][y] == ' ' || x < 0 || y < 0)
		ft_stop(EXIT_FAILURE, cub, "Error\nMap doesn't fit criterias.");
	if (limit > 28000)
		ft_stop(EXIT_FAILURE, cub, "Error\nMap must be smaller.");
	if (cub->map[x][y] != '0')
		return ;
	if (cub->map[x][y] == 'F')
		return ;
	if (cub->map[x][y] == '0')
		cub->map[x][y] = 'F';
	flood_fill_algo(cub, limit + 1, x + 1, y);
	flood_fill_algo(cub, limit + 1, x - 1, y);
	flood_fill_algo(cub, limit + 1, x, y + 1);
	flood_fill_algo(cub, limit + 1, x, y - 1);
}

void	scan_errors(t_cub *cub, char **map)
{
	int	i;
	int	j;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (ft_strchr("01NSWE ", map[i][j]) == 0)
				ft_stop(EXIT_FAILURE, cub, "Error\nUnallowed character in map");
			if (ft_strchr("NSWE", map[i][j]))
			{
				if (cub->sp_dir != '!')
					ft_stop(EXIT_FAILURE, cub, "Error\nCant have spawns > 1");
				cub->sp_dir = cub->map[i][j];
				cub->spawnx = i;
				cub->spawny = j;
			}
			j++;
		}
		i++;
	}
}

void	malloc_map_2(t_cub *cub, char *map)
{
	int	i;
	int	j;
	int	line;

	i = 0;
	j = 0;
	line = 0;
	while (map[i])
	{
		if (map[i] == '\n')
		{
			cub->map[j] = malloc(sizeof (char) * (line + 1));
			if (cub->map[j] == NULL)
				ft_stop(EXIT_FAILURE, cub, "Error\nMalloc failed");
			ft_strcpy(cub->map[j], &map[i - line + 1]);
			if (line > cub->width)
				cub->width = line;
			line = 0;
			j++;
		}
		i++;
		line++;
	}
}

void	malloc_map(t_cub *cub, char *map)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (map[i])
	{
		if (map[i] == '\n')
			size++;
		i++;
	}
	cub->map = malloc(sizeof (char *) * (size + 1));
	if (cub->map == NULL)
		ft_stop(EXIT_FAILURE, cub, "Error\nMalloc failed");
	cub->map[size] = NULL;
	cub->height = size;
	malloc_map_2(cub, map);
}

void	check_map(t_cub *cub, char *map)
{
	int	i;
	int	j;

	i = 0;
	malloc_map(cub, map); //j'aurais aussi pu faire un ft_split en fait... lol (-_-)'
	scan_errors(cub, cub->map);
	cub->map[cub->spawnx][cub->spawny] = '0';
	flood_fill_algo(cub, 0, cub->spawnx, cub->spawny);
	while (cub->map[i])
	{
		j = 0;
		while (cub->map[i][j])
		{
			if (cub->map[i][j] == '0')
				flood_fill_algo(cub, 0, i, j);
			j++;
		}
		i++;
	}
}
