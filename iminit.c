/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iminit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epascual <epascual@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 12:15:11 by epascual          #+#    #+#             */
/*   Updated: 2025/05/05 11:07:22 by epascual42       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "imnum.h"

//Inicializa complejos
void	iminit(t_num *res, t_im a, t_im b)
{
	res->x = a;
	res->y = b;
	res->mod = immod(res);
	res->arg = imarg(res);
}
