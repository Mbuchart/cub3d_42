#include "../includes/cub3d.h"

// void    draw_we(t_data *data)
// {

// }

void    draw_floor(t_data *data)
{
	if (data->lineh >= data->mh)
		return ;
	while (data->dx < data->mh)
	{
		data->dy = 0;
		while (data->dy < data->ml / WIN_L)
		{
			my_mlx_pixel_put(data, data->li + data->dy, data->dx, 0x00550000);	//put floor color 
			data->dy++;
		}
		data->dx++;
	}
}

void    draw_ceiling(t_data *data)
{
	data->loff = 0;
	data->distt = data->distt * cos(data->ca);
	data->lineh = (data->resx * data->mh) / data->distt;
	data->chl = data->lineh / 64;
	data->ch = data->chl;

	data->pos_tex = 0;          //draw_west
	data->j = 0;
	while (data->j < data->ry)
		data->j += 64;
	data->pos_tex = data->ry - (data->j - 64);
	data->pos_tex = (data->pos_tex - 64) * -1;

	data->dx = ((data->mh / 2) - data->lineh / 2);
	data->di = 0;
	if (data->lineh >= data->mh)
	{
		data->loff = (data->lineh - data->mh) / 2;
		while (data->chl < data->loff)
		{
			data->pos_tex += 64;
			data->chl += data->ch;
		}
		data->lineh = data->mh;
		data->dx = 0;
	}
	
	data->li = data->r * (data->ml / WIN_L);
	data->di = 0;
	while (data->di < data->dx)
	{
		data->dy = 0;
		while (data->dy < data->ml / WIN_L)
		{
			my_mlx_pixel_put(data, data->li + data->dy, data->di, 0x00FFFFFF); // put ceiling color
			data->dy++;
		}
		data->di++;
	}
}

void	draw_3d(t_data *data)
{
	data->wall_index = 0;           //index de tex[wall_index] which wall
									// which wall so no we ea ??
	data->ca = data->pa - data->ra;
	if (data->ca < 0)
		data->ca += 2 * PI;
	if (data->ca > 2 * PI)
		data->ca -= 2 * PI;

	draw_ceiling(data);
	if (data->colorw == 1)
	{
		if (data->lineh < data->mh)
			data->di = 0;
		else
			data->di = data->loff;
		while (data->di < data->lineh + data->loff)
		{
			my_mlx_pixel_put(data, data->r, data->dx,
				data->tex[data->wall_index][data->pos_tex]); // put wall texture ??
			data->di++;
			data->dx++;
			if (data->di > data->chl)
			{
				while (data->chl < data->di)
				{
					data->pos_tex += 64;
					data->chl += data->ch;
				}
			}
		}
	}
	else
	{
		data->di = 0;
		while (data->di < data->lineh)
		{
			data->dy = 0;
			while (data->dy < data->ml / WIN_L)
			{
				my_mlx_pixel_put(data, data->li + data->dy, data->dx, data->colorw); // put wall texture ??
				data->dy++;
			}
			data->di++;
			data->dx++;
		}
	}
	draw_floor(data);
}