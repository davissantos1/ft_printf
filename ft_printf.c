/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 12:59:00 by dasimoes          #+#    #+#             */
/*   Updated: 2025/07/16 23:03:40 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_printf_aux(const char letter, va_list *list)
{
	int	count;

	count = 0;
	if (letter == 'c')
		count += ft_putchar(va_arg(*list, int));
	if (letter == 's')
		count += ft_putstr(va_arg(*list, char *));
	if (letter == 'p')
		count += ft_puthex((unsigned long)va_arg(*list, void *), 0);
	if (letter == 'd' || letter == 'i')
		count += ft_putnbr(va_arg(*list, int));
	if (letter == 'u')
		count += ft_putnbr_unsigned(va_arg(*list, unsigned int), 0);
	if (letter == 'x')
		count += ft_puthex(va_arg(*list, unsigned int), 0);
	if (letter == 'X')
		count += ft_puthex(va_arg(*list, unsigned int), 1);
	if (letter == '%')
		count += ft_putchar('%');
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list		list;
	int		count;
	int		i;

	i = 0;
	count = 0;
	va_start(list, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			count += ft_printf_aux(format[i], &list);
		}
		else
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(list);
	return (count);
}
