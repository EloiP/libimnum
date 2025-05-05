/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   imsum.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epascual <epascual@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 12:13:58 by epascual          #+#    #+#             */
/*   Updated: 2025/02/27 12:25:16 by epascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "imnum.h"

//Suma complejos
t_num	imsum(t_num a, ...)
{
	va_list	b;
	t_im	resx;
	t_im	resy;
	t_num	iter;

	va_start(b, a);
	resx = a.x;
	resy = a.y;
	iter = va_arg(b, t_num);
	while (iter.init == 1)
	{
		iter = va_arg(b, t_num);
		resx += iter.x;
		resy += iter.y;
	}
	va_end(b);
	return (iminit(resx, resy));
}
