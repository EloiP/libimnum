/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   imsum.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epascual <epascual@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 12:13:58 by epascual          #+#    #+#             */
/*   Updated: 2025/05/05 16:25:33 by epascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "imnum.h"

//Suma complejos
t_num	*imsum(int a, t_num *ret, ...)
{
	va_list	b;
	t_im	resx;
	t_im	resy;
	t_num	iter;
	int		i;

	va_start(b, ret);
	resx = 0;
	resy = 0;
	iter = va_arg(b, t_num);
	while (i++ < a)
	{
		iter = va_arg(b, t_num);
		resx += iter.x;
		resy += iter.y;
	}
	va_end(b);
	iminit(ret, resx, resy);
	return (ret);
}
