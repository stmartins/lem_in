/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_sign.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 20:20:47 by stmartin          #+#    #+#             */
/*   Updated: 2018/02/28 10:20:09 by stmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

size_t	ft_move_sign(const char *s, char c, size_t i)
{
	if (!s || !*s)
		return (0);
	while ((s && s[i]) && s[i] == c)
		i++;
	return (i);
}
