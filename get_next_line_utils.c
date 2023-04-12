/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoria-j < msoria-j@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 14:29:23 by msoria-j          #+#    #+#             */
/*   Updated: 2023/04/12 18:59:43 by msoria-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"get_next_line.h"

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *str1, char *str2)
{
	int				i;
	int				j;
	char			*ptr;
	unsigned int	size;

	if (!str1)
	{
		str1 = (char *)malloc(1 * sizeof(char));
		str1[0] = '\0';
	}
	if (!str1 || !str2)
		return (NULL);
	size = ft_strlen(str1) + ft_strlen(str2);
	ptr = (char *)malloc(sizeof(char) * (size + 1));
	if (!ptr)
		return (NULL);
	i = -1;
	j = 0;
	while (str1[++i])
		ptr[i] = str1[i];
	while (str2[j])
		ptr[i++] = str2[j++];
	ptr[size] = '\0';
	free(str1);
	return (ptr);
}

char	*ft_strchr(const char *s, int c)
{
	char	cc;
	char	*str;
	int		i;

	i = 0;
	str = (char *) s;
	cc = (char) c;
	while (str[i] != cc)
	{
		if (str[i] == '\0')
			return (NULL);
		i++;
	}
	return (str + i);
}
