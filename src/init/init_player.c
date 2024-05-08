/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:04:40 by jkulka            #+#    #+#             */
/*   Updated: 2024/01/22 13:25:31 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/cub3d.h"

static void	init_player_2(t_data *data)
{
	if (data->player.dir == 'N')
	{
		data->player.dir_x = 0;
		data->player.dir_y = -1;
		data->player.plane_x = 0.66;
		data->player.plane_y = 0;
	}
	else if (data->player.dir == 'S')
	{
		data->player.dir_x = 0;
		data->player.dir_y = 1;
		data->player.plane_x = -0.66;
		data->player.plane_y = 0;
	}
}

static void	init_player_1(t_data *data)
{
	if (data->player.dir == 'E')
	{
		data->player.dir_x = -1;
		data->player.dir_y = 0;
		data->player.plane_y = 0.66;
		data->player.plane_x = 0;
	}
	else if (data->player.dir == 'W')
	{
		data->player.dir_x = 1;
		data->player.dir_y = 0;
		data->player.plane_y = -0.66;
		data->player.plane_x = 0;
	}
}

void	init_player(t_data *data)
{
	if (data->player.dir == 'W' || data->player.dir == 'E')
		init_player_1(data);
	else
		init_player_2(data);
}
