/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusta <mjusta@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 12:19:56 by mjusta            #+#    #+#             */
/*   Updated: 2025/05/25 17:19:36 by mjusta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;

	dlen = 0;
	slen = ft_strlen(src);
	while (dst[dlen] && dlen < dstsize)
		dlen++;
	if (dlen < dstsize)
	{
		i = 0;
		while (src[i] && (dlen + i + 1) < dstsize)
		{
			dst[dlen + i] = src[i];
			i++;
		}
		dst[dlen + i] = '\0';
	}
	return (dlen + slen);
}
