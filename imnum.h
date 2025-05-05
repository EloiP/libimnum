/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   imnum.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epascual <epascual@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 12:11:54 by epascual          #+#    #+#             */
/*   Updated: 2025/05/05 16:29:12 by epascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include <stdarg.h>

//Define complejos y el tipo de numero que los define
typedef double	t_im;
typedef struct s_imnum
{
	t_im	x;
	t_im	y;
	t_im	mod;
	t_im	arg;
}	t_num;

t_im	imarg(t_num *a);
void	iminv(t_num *a);
t_im	immod(t_num *a);
t_num	*immul(int a, t_num *ret, ...);
t_num	*imsum(int a, t_num *ret, ...);
void	printim(t_num *print, int mode);
void	iminit(t_num *res, t_im a, t_im b);
void	imre(t_num *a);
void	imim(t_num *a);
