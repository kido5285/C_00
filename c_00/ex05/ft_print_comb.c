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

void    ft_print_comb(void)
{
        char    dig[12];
        int     i;
        int     j;
        int     k;

        strcpy(dig, "0123456789");
        i = 0;
        while   (i <= 7)
        {
                j = 1;
                while   (j <= 8)
                {
                        k = 2;
                        while   (k <= 9)
                        {
                                if (j == k || i == k)
                                        k++;
                                else if (j == i)
                                        i++;

                                write(1, &dig[i], 1);
                                write(1, &dig[j], 1);
                                write(1, &dig[k], 1);
                                write(1, " ,", 3);
                                k++;
                        }
                        j++;
                }
                i++;
        }
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
