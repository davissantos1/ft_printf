
#include "ft_printf.h"

static void	ft_putnbr_unsigned_aux(unsigned int nb)
{
	if (nb > 9)
		ft_putnbr_unsigned_aux(nb/10);
	write(1, &"0123456789"[nb % 10], 1);	
}

int	ft_putnbr_unsigned(unsigned int nb)
{
	ft_putnbr_unsigned_aux(nb);
	return (ft_diglen(nb));
}

int	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr_unsigned_aux((unsigned int)(-nb));
		return (ft_diglen(nb) + 1);
	}
	ft_putnbr_unsigned_aux((unsigned int)nb);
	return (ft_diglen(nb));
}
