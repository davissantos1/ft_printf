/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 12:33:55 by dasimoes          #+#    #+#             */
/*   Updated: 2025/07/14 22:31:54 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

// Local libraries
# include "libft.h"

// External libraries
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

// Prototypes
int		ft_printf(const char *format ...);
void	ft_putstr(char *str);
void	ft_putchar(char c);

#endif
