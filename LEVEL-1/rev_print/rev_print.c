/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 11:01:44 by mlaffita          #+#    #+#             */
/*   Updated: 2025/01/05 11:18:50 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc, char *argv[])
{
	int i;

	i = 0;
	if ( argc != 2)
	{
		write ( 1, "\n", 1);
		return (0);
	}
	while ( argv[1][i] != '\0')
		i++;
	i--;
	while ( i >= 0)
	{
		write ( 1, &argv[1][i], 1);
		i--;
	}
	write ( 1, "\n", 1);
	return (0);
}