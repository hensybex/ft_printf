/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medesmon <medesmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 04:38:25 by medesmon          #+#    #+#             */
/*   Updated: 2019/09/20 04:38:27 by medesmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	int	len;

	if (!s || !*s)
		return ;
	len = ft_strlen(s);
	ft_memset(s, (int)'\0', len);
}