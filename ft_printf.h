/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 12:33:55 by dasimoes          #+#    #+#             */
/*   Updated: 2025/07/17 17:54:14 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

// External libraries
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

// Prototypes
int	ft_diglen(int nb);
int	ft_strlen(const char *s);
int	ft_printf(const char *format ...);
int	ft_putstr(char *str);
int	ft_putchar(char c);
int	ft_puthex(unsigned int dec, int cap);
int	ft_putnbr(int nb);
int	ft_putnbr_unsigned(unsigned int nb);
int	ft_toupper(int c);

#endif
