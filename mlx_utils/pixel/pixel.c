/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pixel.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 15:00:04 by yboudoui          #+#    #+#             */
/*   Updated: 2023/05/03 11:20:14 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pixel.h"

t_pixel	pixel(t_vec2 coord, t_color color)
{
	return ((t_pixel){coord, color});
}