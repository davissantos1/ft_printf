/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_diglen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 17:54:35 by dasimoes          #+#    #+#             */
/*   Updated: 2025/07/17 17:55:35 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_diglen(int nb)
{
	int				len;
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
