/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_add.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelboukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:41:14 by oelboukh          #+#    #+#             */
/*   Updated: 2022/11/06 17:43:10 by oelboukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_add(size_t nb, int *len)
{
	char	*str;

	str = "0123456789abcdef";
	if (nb >= 16)
		print_add(nb / 16, len);
	ft_putchar(str[nb % 16], len);
}
