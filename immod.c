/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   immod.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epascual <epascual@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 12:16:14 by epascual          #+#    #+#             */
/*   Updated: 2025/02/27 15:23:51 by epascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "imnum.h"
#include <math.h>

//Obtiene modulo(radio) de un complejo
t_im	immod(t_num a)
{
	t_im	tmp;

	tmp = (a.x * a.x + a.y * a.y);
	return (sqrt(tmp));
}
