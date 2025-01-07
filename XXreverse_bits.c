/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 23:08:28 by mlaffita          #+#    #+#             */
/*   Updated: 2025/01/06 23:11:28 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char result = 0;
	int i = 0;
	
	while ( i < 8 )
	{
		result <<= 1;
		result |= (octet & 1);
		octet >>= 1;
		i++;
	}
	return (result);
}