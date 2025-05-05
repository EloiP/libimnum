/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iminv.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epascual <epascual@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 12:16:50 by epascual          #+#    #+#             */
/*   Updated: 2025/05/05 11:12:47 by epascual42       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "imnum.h"

//Invierte complejos
void	iminv(t_num *a)
{
	t_im	resx;
	t_im	resy;

	resx = (a->x) / (a->x * a->x + a->y * a->y);
	resy = (-(a->y)) / (a->x * a->x + a->y * a->y);
	iminit(a, resx, resy);
}
