/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 17:25:43 by ismherna          #+#    #+#             */
/*   Updated: 2024/03/10 19:22:27 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char    *get_next_line(int fd);
static char    *ft_fill_line_in_buffer(int fd, char *left_c, char *buffer);
static char    *ft_set_line(char   *line_buffer);

char	*get_next_line(int fd)
{
	static char *left_c; 
	char		*line; 
	char		*buffer; 

	buffer = (char *)malloc((BUFFER_SIZE + 1 )* sizeof(char));
}