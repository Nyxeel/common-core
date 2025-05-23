/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjelinek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 19:08:15 by pjelinek          #+#    #+#             */
/*   Updated: 2025/02/19 19:14:24 by pjelinek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	/*if (n == 0)
		return (0);*/
	while (s1[i] == s2[i] && s1[i] && s2[i] && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
	/* 
	0 = die ersten n Zeichen sind gleich
	< 0  s1 kommt lexographis vor s2
	> 0 s2 kommt vorher 
	*/
}

int	main(void)
{
	char src[] = "aaaacaba";
	char dest[] = "aaaaabcabcabb";
	size_t n = 7;

	int result = ft_strncmp(src, dest, n);
    	printf("Return: %d", result);
}
