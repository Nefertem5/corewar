/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubyrd <ubyrd@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 02:53:16 by ubyrd             #+#    #+#             */
/*   Updated: 2019/07/30 12:04:31 by ubyrd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

int				is_comment(char *line)
{
	while (*line && (*line == ' ' || *line == '\t'))
		line++;
	return (!*line || *line == '\n' || *line == COMMENT_CHAR ||
			*line == ALT_COMMENT_CHAR);
}
