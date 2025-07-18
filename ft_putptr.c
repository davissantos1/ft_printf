/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 17:52:56 by dasimoes          #+#    #+#             */
/*   Updated: 2025/07/18 20:04:03 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_printhex(unsigned long long dec)
{
	if (dec > 15)
		ft_printhex(dec / 16);
	write(1, &"0123456789abcdef"[dec % 16], 1);
}

static int	ft_dighex(unsigned long long dec)
{
	int	count;

	count = 0;
	if (!dec)
		return (1);
	while (dec)
	{
		dec /= 16;
		count++;
	}
	return (count);
}

int	ft_putptr(unsigned long long dec)
{
	if (!dec)
		return (write(1, "(nil)", 5));
	ft_putstr("0x");
	ft_printhex(dec);
	return (ft_dighex(dec) + 2);
}
