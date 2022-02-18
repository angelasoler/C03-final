/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 01:53:47 by asoler            #+#    #+#             */
/*   Updated: 2022/02/16 01:59:33 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count(char	*s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char	*dest, const char	*src)
{
	int	i;
	int	size;

	size = count(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[size] = src[i];
		i++;
		size++;
	}
	dest[size] = src[i];
	return (dest);
}
