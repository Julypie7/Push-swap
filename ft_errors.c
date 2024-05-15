/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:03:41 by ineimatu          #+#    #+#             */
/*   Updated: 2024/04/16 15:51:03 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	print_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

long	ftatoi(char *str)
{
	int		i;
	long	res;
	int		sign;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] == '\f' || str[i] == '\n' || str[i] == '\r' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * sign);
}

int	limits(char **argv)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		if (ftatoi(argv[i]) > 2147483647)
			return (1);
		if (ftatoi(argv[i]) < -2147483648)
			return (1);
		i++;
	}
	return (0);
}

int	dupl(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 1;
		while (argv[i + j])
		{
			if (ftatoi(argv[i]) == ftatoi(argv[i + j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_char(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		if (!argv[i][j])
			return (1);
		if (argv[i][j] == '-' || argv[i][j] == '+')
		{
			if (!(argv[i][j + 1] <= '9' && argv[i][j + 1] >= '0'))
				return (1);
			j++;
		}
		while (argv[i][j])
		{
			if (!(argv[i][j] <= '9' && argv[i][j] >= '0'))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
