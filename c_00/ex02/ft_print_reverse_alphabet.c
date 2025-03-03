/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atuck-xi <atuck-xi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 16:05:06 by atuck-xi          #+#    #+#             */
/*   Updated: 2025/03/02 16:07:28 by atuck-xi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void);

int	g_i;

void	ft_print_alphabet(void)
{
	char	*alph;

	g_i = 26;
	alph = "abcdefghijklmnopqrstuvwxyz";
	while (g_i >= 0)
	{
		write(1, &alph[g_i], 1);
		g_i--;
	}
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}
