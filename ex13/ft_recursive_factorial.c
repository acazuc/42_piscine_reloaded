/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/28 16:08:02 by acazuc            #+#    #+#             */
/*   Updated: 2016/12/28 16:09:33 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (!nb)
		return (0);
	if (nb == 1 || nb == -1)
		return (nb);
	if (nb < 0)
		return (nb * ft_recursive_factorial(nb + 1));
	return (nb * ft_recursive_factorial(nb - 1));
}
