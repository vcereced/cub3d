/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_steven_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcereced <vcereced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 19:04:01 by vcereced          #+#    #+#             */
/*   Updated: 2023/11/26 18:01:05 by vcereced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "cub3d_bonus.h"

int	almost_equal(double izquierda, double derecha)
{
	if (fabs(izquierda - derecha) <= 0.1)
		return (1);
	return (0);
}

void	ft_draw_steven(float wallheight, int column, t_data *data)
{
	float	incremente_texture_column;
	int		n;
	int column_texture;
	
	n = 0.0;
	incremente_texture_column = data->sprites[WALL_N]->width / wallheight;
	column = column - wallheight / 2;
	data->cast.bonus.n = -1;
	data->column_texture = 0;
	while ((data->column_texture) < (data->sprites[ENEMY]->width -10))
	{
		data->column_texture = (int)(incremente_texture_column * n);
		drawlinetexture_bonus(column, ((HEIGHT) / 2) - data->up, ((HEIGHT) / 2) \
		+ (wallheight) - data->up, data);
		n++;
		column++;
	}
}

void	get_distance_steven(int column, t_data *data, double angle_me)
{
	float	dx;
	float	dy;
	float	distance;
	float	wallheight;

	dx = data->px - data->steven_x;
	dy = data->py - data->steven_y;
	distance = sqrt(pow(dy, 2) + pow(dx, 2));
	distance = fix_fish_eye(distance, angle_me, data->angle);
	wallheight = floor((HEIGHT) / 2) / distance;
	ft_draw_steven(wallheight, column, data);
}

void	draw_steven_sprite(t_data *data)
{
	double	angle_steven_from_me;
	double	angulo_me;
	float	increment_angle;
	int		column;

	angle_steven_from_me = data->angle_steven - 180;
	angulo_me = data->angle - 30;
	increment_angle = 60.0f / WIDTH;
	column = 0;
	normalize_angle(&angulo_me, &angle_steven_from_me);
	while (column < WIDTH)
	{
		if (almost_equal(angulo_me, angle_steven_from_me) == 1)
		{
			get_distance_steven(column, data, angulo_me);
			break ;
		}
		angulo_me += increment_angle;
		normalize_angle(&angulo_me, &angle_steven_from_me);
		column++;
	}
}

void	encounter_steven(t_data *data)
{
	double	angle_steven_from_me;
	double	angulo_me;
	float	increment_angle;
	int		column;

	angle_steven_from_me = data->angle_steven - 180;
	angulo_me = data->angle - 30;
	increment_angle = 60.0f / WIDTH;
	column = 0;
	normalize_angle(&angulo_me, &angle_steven_from_me);
	while (column < WIDTH)
	{
		if (almost_equal(angulo_me, angle_steven_from_me) == 1)
		{
			data->zombie = 1;
			break ;
		}
		angulo_me += increment_angle;
		normalize_angle(&angulo_me, &angle_steven_from_me);
		column++;
		data->zombie = 0;
	}
}
