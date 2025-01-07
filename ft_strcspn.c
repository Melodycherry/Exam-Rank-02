/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 21:27:31 by mlaffita          #+#    #+#             */
/*   Updated: 2025/01/05 21:37:31 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t ft_strcspn( const char *s, const char *reject)
{
	size_t i;
	size_t j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (reject[j] != '\0')
		{
			if (s[i] == reject[j])
				return (i);
			j++;	
		}
		i++;
	}
	return (i);
}
/*
#include <stdio.h> 
int main ()
{
	char test[] = "bonjour";
	char voyelle[] = "x";
	size_t soluce;
	soluce = ft_strcspn (test, voyelle);
	printf( "%zu", soluce);
	return (0);
}
*/