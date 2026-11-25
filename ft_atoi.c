/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilaakoub <ilaakoub@student.1337.ma>        +#+  +#+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 18:22:00 by ilaakoub          #+#    #+#             */
/*   Updated: 2026/11/09 09:57:02 by ilaakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	is_space(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

static int	overflow_value(int sign)
{
	if (sign == 1)
		return (-1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	unsigned long	n;
	int				digit;
	int				sign;

	n = 0;
	sign = 1;
	while (is_space(*nptr))
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		digit = *nptr - '0';
		if (n > ((unsigned long)-1 / 2 - digit) / 10)
			return (overflow_value(sign));
		n = n * 10 + digit;
		nptr++;
	}
	return ((n * sign));
}
