/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   immod.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epascual <epascual@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 12:16:14 by epascual          #+#    #+#             */
/*   Updated: 2025/05/05 15:40:23 by epascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "imnum.h"

//Obtiene modulo(radio) de un complejo
t_im	immod(t_num *a)
{
	t_im	tmp;

	tmp = (a->x * a->x + a->y * a->y);
	tmp = (t_im)sqrt(tmp);
	return (tmp);
}
