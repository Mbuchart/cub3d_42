#include "../includes/cub3d.h"

void	move_player_d2(t_data *data)
{
	if (data->pa > P2 && data->pa < PI)	//3
	{
		if (data->map[data->iposx_add_wxo][data->iposy] == '0')
			data->posx += cos(data->pa + PI / 2) * 1.5;
		if (data->map[data->iposx][data->iposy_sub_wyo] == '0')
			data->posy += sin(data->pa + PI / 2) * 1.5;
	}
	else if (data->pa > PI && data->pa < P3)	//4
	{
		if (data->map[data->iposx_sub_wxo][data->iposy] == '0')
			data->posx += cos(data->pa + PI / 2) * 1.5;
		if (data->map[data->iposx][data->iposy_add_wyo] == '0')
			data->posy += sin(data->pa + PI / 2) * 1.5;
	}
}

void	move_player_d(t_data *data)
{
	if (data->pa > P3 && data->pa < PI * 2)	//1
	{
		if (data->map[data->iposx_add_wxo][data->iposy] == '0')
			data->posx += cos(data->pa + PI / 2) * 1.5;
		if (data->map[data->iposx][data->iposy_sub_wyo] == '0')
			data->posy += sin(data->pa + PI / 2) * 1.5;
	}
	else if (data->pa > 0 && data->pa < P2)	//2
	{
		if (data->map[data->iposx_sub_wxo][data->iposy] == '0')
			data->posx += cos(data->pa + PI / 2) * 1.5;
		if (data->map[data->iposx][data->iposy_add_wyo] == '0')
			data->posy += sin(data->pa + PI / 2) * 1.5;
	}
	move_player_d2(data);
}

void	move_player_a2(t_data *data)
{
	if (data->pa > P2 && data->pa < PI)	//3
	{
		if (data->map[data->iposx_sub_wxo][data->iposy] == '0')
			data->posx -= cos(data->pa + PI / 2) * 1.5;
		if (data->map[data->iposx][data->iposy_add_wyo] == '0')
			data->posy -= sin(data->pa + PI / 2) * 1.5;
	}
	else if (data->pa > PI && data->pa < P3)	//4
	{
		if (data->map[data->iposx_add_wxo][data->iposy] == '0')
			data->posx -= cos(data->pa + PI / 2) * 1.5;
		if (data->map[data->iposx][data->iposy_sub_wyo] == '0')
			data->posy -= sin(data->pa + PI / 2) * 1.5;
	}
}

void	move_player_a(t_data *data)
{
	if (data->pa > P3 && data->pa < PI * 2)	//1
	{
		if (data->map[data->iposx_sub_wxo][data->iposy] == '0') // tester 
			data->posx -= cos(data->pa + PI / 2) * 1.5;
		if (data->map[data->iposx][data->iposy_add_wyo] == '0')
			data->posy -= sin(data->pa + PI / 2) * 1.5;
	}
	else if (data->pa > 0 && data->pa < P2)	//2
	{
		if (data->map[data->iposx_add_wxo][data->iposy] == '0') // tester
			data->posx -= cos(data->pa + PI / 2) * 1.5;
		if (data->map[data->iposx][data->iposy_sub_wyo] == '0')
			data->posy -= sin(data->pa + PI / 2) * 1.5;
	}
	move_player_a2(data);
}