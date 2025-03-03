/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atuck-xi <atuck-xi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 17:49:15 by atuck-xi          #+#    #+#             */
/*   Updated: 2025/03/02 17:57:56 by atuck-xi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	char	b_n;
	char	b_p;

	b_n = 'N';
	b_p = 'P';
	if (n < 0 || n == 0)
		write(1, &b_n, 1);
	else
		write(1, &b_p, 1);
}

int	main(void)
{
	return (0);
}
