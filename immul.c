/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   immul.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epascual <epascual@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 12:14:37 by epascual          #+#    #+#             */
/*   Updated: 2025/05/04 12:59:23 by epascual42       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "imnum.h"

//Multiplica complejos
t_num	immul(t_num a, ...)
{
	va_list	b;
	t_im	resx;
	t_im	resy;
	t_im	tmp;
	t_num	iter;
	int	i;

	va_start(b, a);
	resx = a.x;
	resy = a.y;
	i = 0;
	iter = va_arg(b, t_num);
	while (i++ <= a)
	{
		tmp = resx;
		resx = ((resx) * (iter.x)) - ((resy) * (iter.y));
		resy = ((tmp) * (iter.y) )+ ((resy) * (iter.x));
		iter = va_arg(b, t_num);
	}
	t_num	ret;
	ret = iminit(resx, resy);
	va_end(b);
	return (ret);
}
