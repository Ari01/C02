/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 14:49:14 by dchheang          #+#    #+#             */
/*   Updated: 2020/09/23 13:16:13 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		isseparator(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int		get_nstring(char *str, char *charset)
{
	int i;
	int nstring;

	i = 0;
	nstring = 0;
	if (str == NULL || charset == NULL)
		return (0);
	while (str[i])
	{
		if (!isseparator(str[i], charset) && str[i])
		{
			nstring++;
			while (!isseparator(str[i], charset) && str[i])
				i++;
		}
		else if (isseparator(str[i], charset))
		{
			while (isseparator(str[i], charset) && str[i])
				i++;
		}
	}
	return (nstring);
}

char	*get_substring(char *str, char *charset, int start)
{
	char	*substring;
	int		i;
	int		j;

	i = start;
	j = 0;
	while (!isseparator(str[i], charset) && str[i])
		i++;
	if ((substring = malloc(sizeof(char) * (i - start + 1))) == NULL)
		return (NULL);
	while (start < i)
	{
		substring[j] = str[start];
		start++;
		j++;
	}
	substring[j] = 0;
	return (substring);
}

char	**store_substring(char **split, char *str, char *charset)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (isseparator(str[i], charset) && str[i])
			i++;
		if (str[i])
		{
			split[j] = NULL;
			split[j] = get_substring(str, charset, i);
			while (str[i] && !isseparator(str[i], charset))
				i++;
			j++;
		}
	}
	split[j] = 0;
	return (split);
}

char	**ft_split(char *str, char *charset)
{
	char	**split;
	int		i;
	int		size;
	int		stringlen;

	i = 0;
	stringlen = 0;
	split = NULL;
	size = get_nstring(str, charset);
	if (!size)
	{
		split = malloc(sizeof(char*));
		split[0] = 0;
		return (split);
	}
	size++;
	if ((split = malloc(sizeof(char*) * size)) == NULL)
		return (NULL);
	split = store_substring(split, str, charset);
	return (split);
}
