/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/28 16:08:02 by acazuc            #+#    #+#             */
/*   Updated: 2016/12/28 18:06:50 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int		res;

	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	if (nb == 1)
		return (nb);
	res = ft_recursive_factorial(nb - 1);
	if (res == 0)
		return (0);
	if (nb * res / res != nb)
		return (0);
	return (nb * res);
}
