#include "imnum.h"
t_num	*imim(t_num *a)
{
	t_num	tmp;

	tmp = iminit(0, a->y);
	return (&tmp);
}
