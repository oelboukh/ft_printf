/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelboukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:24:21 by oelboukh          #+#    #+#             */
/*   Updated: 2022/11/07 15:50:02 by oelboukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_format(const char c, va_list element, int *len)
{
	if (c == 'c')
		ft_putchar(va_arg(element, int), len);
	else if (c == 's')
		ft_putstr(va_arg(element, char *), len);
	else if (c == 'd' || c == 'i')
		ft_putnbr (va_arg(element, int), len);
	else if (c == 'u')
		ft_unbr(va_arg(element, unsigned int), len);
	else if (c == 'x')
		printhex(va_arg(element, unsigned int), len);
	else if (c == 'X')
		ft_uphex(va_arg(element, unsigned int), len);
	else if (c == '%')
		ft_putchar('%', len);
	else if (c == 'p')
	{
		ft_putstr("0x", len);
		print_add(va_arg(element, size_t), len);
	}
	else
		ft_putchar(c, len);
	return (*len);
}
