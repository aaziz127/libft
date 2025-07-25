/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaziz <alaziz.student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 18:18:19 by alaziz            #+#    #+#             */
/*   Updated: 2025/06/20 00:33:56 by alaziz           ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static char	**free_mem(char **result, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
		free(result[i++]);
	free(result);
	return (NULL);
}

static char	*extract_word(char const *s, char c, size_t *start)
{
	size_t	len;
	char	*word;

	len = 0;
	while (s[*start] && s[*start] == c)
		(*start)++;
	while (s[*start + len] && s[*start + len] != c)
		len++;
	word = ft_substr(s, *start, len);
	if (!word)
		return (NULL);
	*start += len;
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	word_count;
	size_t	start;
	size_t	i;

	start = 0;
	i = 0;
	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	result = malloc((word_count + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (i < word_count)
	{
		result[i] = extract_word(s, c, &start);
		if (!result[i])
			return (free_mem(result, i));
		i++;
	}
	result[i] = NULL;
	return (result);
}
/*
int	main(void)
{
	char	str[] = "  Bonjour,   je suis un exemple  ";
	char	**split;
	int	i;
	const char *s = "abc,def,ghi";
	char c = ',';
	char **result = ft_split(s, c);

	printf("%s: a spliter par:%c:\n", s, c);
	if (result) {
    	for (int i = 0; result[i]; i++) {
       		 printf("Mot %d: '%s'\n", i + 1, result[i]);
        free(result[i]);
    	}
    	free(result);
	}

	const char *s1 = "abc,,def,,,ghi";
	char c1 = ',';
	char **result1 = ft_split(s1, c1);

	printf("%s: a spliter par:%c:\n", s1, c1);
	if (result) {
    	for (int i = 0; result1[i]; i++) {
       	 	printf("Mot %d: '%s'\n", i + 1, result1[i]);
        	free(result1[i]);
    	}
   		 free(result1);
	}
	split = ft_split(str, ' ');
	if (!split)
	{
		printf("Memory allocation failed\n");
		return (1);
	}
	i = 0;
	printf("%s: a spliter par:%c:\n", str, ' ');
	while (split[i])
	{
		printf("Word %d: %s\n", i, split[i]);
		i++;
	}
	i = 0;
	while (split[i])
		free(split[i++]);
	free(split);
	return (0);
}
*/
