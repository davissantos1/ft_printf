/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 17:53:07 by dasimoes          #+#    #+#             */
/*   Updated: 2025/07/18 19:40:45 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putnbr_aux(unsigned int nb)
{
	if (nb > 9)
		ft_putnbr_aux(nb / 10);
	write(1, &"0123456789"[nb % 10], 1);
}

int	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr_aux((unsigned int)(-nb));
		return (ft_diglen(nb) + 1);
	}
	ft_putnbr_aux((unsigned int)nb);
	return (ft_diglen(nb));
}
