/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epascual <epascual@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 12:17:34 by epascual          #+#    #+#             */
/*   Updated: 2025/05/07 18:06:44 by epascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "imnum.h"
#include <stdio.h>

//imprime complejos
//mode: 
//0: binomica
//1: cartesiana
//2: trigonometrica
//3:exponencial
void	printim(t_num *print, int mode)
{
	if (mode == 0)
	{
		printf("%f + %fi", print->x, print->y);
	}
	if (mode == 1)
	{
		printf("(%f,%f)", print->x, print->y);
	}
	if (mode == 2)
	{
		printf("%f*(cos(%f)+isen(%f))", print->mod, print->arg, print->arg);
	}
	if (mode == 3)
	{
		printf("%f*e^(i*%f)", print->mod, print->arg);
	}
}
