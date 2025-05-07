/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   immul.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epascual <epascual@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 12:14:37 by epascual          #+#    #+#             */
/*   Updated: 2025/05/07 18:03:04 by epascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "imnum.h"

//Multiplica complejos
t_num	*immul(int a, t_num *ret, ...)
{
	va_list	b;
	t_im	resx;
	t_im	resy;
	t_im	tmp;
	t_num	*iter;
	int	i;

	va_start(b, ret);
	resx = 1;
	resy = 0;
	i = 0;
	iter = va_arg(b, t_num *);
	while (i++ < a)
	{
		tmp = resx;
		resx = ((resx) * (iter->x)) - ((resy) * (iter->y));
		resy = ((tmp) * (iter->y) )+ ((resy) * (iter->x));
		iter = va_arg(b, t_num *);
	}
	iminit(ret, resx, resy);
	va_end(b);
	return (ret);
}
