/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafin <orazafin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 14:02:00 by orazafin          #+#    #+#             */
/*   Updated: 2016/12/12 14:02:10 by orazafin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_number(int n)
{
	int i;

	i = 1;
	i = (n < 0) ? i + 1 : i;
	while ((n = n / 10))
		i++;
	return (i);
}