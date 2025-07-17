#include "ft_printf.h"

int	ft_diglen(int nb)
{
	int		len;
	unsigned int	n;

	len = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
		n = (unsigned int)(-nb);
	else
		n = (unsigned int) nb;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

