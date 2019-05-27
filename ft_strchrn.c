/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchrn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirenpat <marcin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 12:13:33 by hirenpat          #+#    #+#             */
/*   Updated: 2019/05/11 17:50:39 by hirenpat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_strchrn(char *str, int c)
{
	int			i;

	i = 0;
	while (str[i] != '\0' && str[i] != (char)c)
		i++;
	return (i);
}
