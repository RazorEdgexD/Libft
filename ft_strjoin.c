/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosobliv <aosobliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 16:04:10 by aosobliv          #+#    #+#             */
/*   Updated: 2017/03/11 14:22:57 by aosobliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char *arr;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	arr = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (arr != NULL)
	{
		arr = ft_strcat(arr, s1);
		arr = ft_strcat(arr, s2);
		return (arr);
	}
	return (NULL);
}
