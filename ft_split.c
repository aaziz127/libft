/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaziz <alaziz.student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 18:18:19 by alaziz            #+#    #+#             */
/*   Updated: 2025/06/17 22:29:40 by alaziz           ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	count;
	int	i;

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

static char	*extract_word(char const *s, char c, int *start, char **result, int i)
{
    int	len;

    while (s[*start] && s[*start] == c)
        (*start)++;
    len = 0;
    while (s[*start + len] && s[*start + len] != c)
        len++;
    result[i] = (char *)malloc(len + 1);
    if (!result[i])
    {
        while (i > 0)
            free(result[--i]);
        free(result);
        return (NULL);
    }
    ft_strlcpy(result[i], s + *start, len + 1);
    *start += len;
    return (result[i]);
}

char	**ft_split(char const *s, char c)
{
    char	**result;
    int		word_count;
    int		i;

    if (!s)
        return (NULL);
    word_count = count_words(s, c);
    result = (char **)malloc((word_count + 1) * sizeof(char *));
    if (!result)
        return (NULL);
    i = 0;
    while (i < word_count)
    {
        result[i] = extract_word(s, c, &i, result, i);
        if (!result[i])
            return (NULL);
        i++;
    }
    result[word_count] = NULL;
    return (result);
}
int main(void)
{
    char str[] = "  Bonjour,   je suis un exemple  ";
    char **split;
    int i;

    split = ft_split(str, ' ');
    if (!split)
    {
        printf("Memory allocation failed\n");
        return (1);
    }

    i = 0;
    while (split[i])
    {
        printf("Word %d: %s\n", i, split[i]);
        i++;
    }

    // Libérer la mémoire
    i = 0;
    while (split[i])
        free(split[i++]);
    free(split);

    return (0);
}
