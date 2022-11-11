/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printhex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelboukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 12:00:17 by oelboukh          #+#    #+#             */
/*   Updated: 2022/11/06 17:44:30 by oelboukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	printhex(unsigned int nb, int *len)
{
	int		i;
	char	*str;

	i = 0;
	str = "0123456789abcdef";
	if (nb >= 16)
		printhex(nb / 16, len);
	ft_putchar(str[nb % 16], len);
}
