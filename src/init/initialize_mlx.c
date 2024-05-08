/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_mlx.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 10:56:50 by rmarquar          #+#    #+#             */
/*   Updated: 2024/01/22 13:25:55 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/cub3d.h"

void	init_mlx(t_data *data)
{
	data->mlx = mlx_init(WIN_WIDTH, WIN_HEIGHT, "Test", false);
	if (!data->mlx)
		ft_error(MLX, data);
	data->img = mlx_new_image(data->mlx, WIN_WIDTH, WIN_HEIGHT);
	if (!data->img || (mlx_image_to_window(data->mlx, data->img, 0, 0) < 0))
		ft_error(MLX, data);
	mlx_set_mouse_pos(data->mlx, WIN_WIDTH / 2, WIN_HEIGHT / 2);
	return ;
}
