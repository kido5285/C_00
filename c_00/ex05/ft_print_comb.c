/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atuck-xi <atuck-xi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 12:25:53 by atuck-xi          #+#    #+#             */
/*   Updated: 2025/03/03 16:00:14 by atuck-xi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

void	ft_print_comb(void);

void	ft_print_comb(void)
{
	char	dig[12];
	int	i;
	int	j;
	int	k;

	strcpy(dig, "0123456789");
	i = 0;
	j = 0;
	k = 0;
	while (i <= 90)
	{
		while (j <= 20)
		{
			j++;
			while(k <= 20){
				write(1, &dig[i], 1);
				write(1, &dig[j], 1);
				write(1, &dig[k], 1);
				write(1, ", ", 2);
				k++;
			}
		}
		i++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
