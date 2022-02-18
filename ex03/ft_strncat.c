/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 01:53:36 by asoler            #+#    #+#             */
/*   Updated: 2022/02/16 02:00:30 by asoler           ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				size;

	size = count(dest);
	i = 0;
	while (i < nb)
	{
		dest[size] = src[i];
		i++;
		size++;
		if (src[i] == '\0')
		{
			dest[size] = '\0';
			return (dest);
		}
	}
	dest[size] = '\0';
	return (dest);
}
