/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoria-j < msoria-j@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 14:29:31 by msoria-j          #+#    #+#             */
/*   Updated: 2023/04/12 18:59:52 by msoria-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

# include<stdlib.h>
# include<unistd.h>

int		ft_strlen(const char *s);
char	*ft_strjoin(char *str1, char *str2);
char	*ft_strchr(const char *s, int c);
char	*get_next_line(int fd);

#endif