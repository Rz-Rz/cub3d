/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   screen.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:06:01 by yboudoui          #+#    #+#             */
/*   Updated: 2023/04/27 16:06:14 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCREEN_H
# define SCREEN_H

# include "mlx_utils.h"
# include "image.h"

typedef struct s_screen {
	t_mlx	*mlx;
	t_image	*img;
	t_vec2	size;
	t_vec2	center;
	void	*data;
}	t_screen;

void		screen_destroy(t_screen *data);
t_screen	*screen_create(char *path, t_vec2 size);

#endif
