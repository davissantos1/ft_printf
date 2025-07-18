/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 17:53:07 by dasimoes          #+#    #+#             */
/*   Updated: 2025/07/18 20:05:00 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putnbr_unsigned_aux(unsigned int nb)
{
	if (nb > 9)
		ft_putnbr_unsigned_aux(nb / 10);
	write(1, &"0123456789"[nb % 10], 1);
}

static int	ft_diglen_unsigned(unsigned int nb)
{
	int				len;

	len = 0;
	if (nb == 0)
		return (1);
	while (nb)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

int	ft_putnbr_unsigned(int nb)
{
	nb = (unsigned int)nb;
	ft_putnbr_unsigned_aux(nb);
	return (ft_diglen_unsigned(nb));
}
