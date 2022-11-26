/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luhego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 17:49:44 by luhego            #+#    #+#             */
/*   Updated: 2022/11/26 18:28:36 by luhego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	print_bits(unsigned char octet)
{
	octet >> 1;
}

int	main(void)
{
	unsigned char	c;
	unsigned char	d;
	
	d = 93;
	c = 0b01011101; >> 1 00000000000000   01011101 >> 7 & 1
	printf_bits(d);
	printf("%c", c);
	return (0);
}
