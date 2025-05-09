/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjelinek <pjelinek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 15:34:32 by pjelinek          #+#    #+#             */
/*   Updated: 2025/05/04 14:49:57 by pjelinek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char	*ziel;

	if (src == NULL)
		return (NULL);
	ziel = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (ziel == NULL)
		return (NULL);
	i = 0;
	while (src[i] != 0)
	{
		ziel[i] = src[i];
		i++;
	}
	ziel[i] = '\0';
	return (ziel);
}

/* int	main(void)
{
	char	*src;
	char	*ziel;

	src = "That string to be copied";
	ziel = ft_strdup(src);
	printf("%s", ziel);
	free(ziel);
} */
