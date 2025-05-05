/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   imarg.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epascual <epascual@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 12:15:43 by epascual          #+#    #+#             */
/*   Updated: 2025/05/04 13:02:44 by epascual42       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "imnum.h"
#include <math.h>

//Obtiene Argumento(angulo) de un complejo
t_im	imarg(t_num *a)
{
	return (atan2(a->x, a->y));
}
