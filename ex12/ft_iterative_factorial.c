/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/28 16:03:45 by acazuc            #+#    #+#             */
/*   Updated: 2016/12/28 16:07:20 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (!nb)
		return (0);
	if (nb < 0)
	{
		while (nb <= -1)
		{
			result *= nb;
			nb++;
		}
		return (result);
	}
	while (nb >= 1)
	{
		result *= nb;
		nb++;
	}
	return (result);
}
