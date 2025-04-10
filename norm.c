/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angavrel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 16:49:32 by angavrel          #+#    #+#             */
/*   Updated: 2016/12/03 17:49:38 by angavrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_isalpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

char	ft_alpha_mirror(char c)
{
	if (c >= 'A' && c <= 'Z')
		return ('Z' - (c - 'A'));
	else if (c >= 'a' && c <= 'z')
		return ('z' - (c - 'a'));
	return (c);
}

int	main(int ac, char **av)
{
	char	*str;

	if (ac == 2)
	{
		str = av[1];
		while (*str)
		{
			if (ft_isalpha(*str))
				ft_putchar(ft_alpha_mirror(*str));
			else
				ft_putchar(*str);
			str++;
		}
	}
	ft_putchar('\n');
	return (0);
}
