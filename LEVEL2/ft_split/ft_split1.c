/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyathams <pyathams@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 14:10:51 by pyathams          #+#    #+#             */
/*   Updated: 2024/04/12 14:38:00 by pyathams         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

char **arrg_words(char **words, char *str)
{
	int i;
	int j;
	int k;
	int len;
	
	i = 0;
	j = 0;
	k = 0;
	while (str[i])
	{
		if (str[i] != ' ' && str[i] != '	')
		{
			len = 0;
			while (str[i + len] != ' ' && str[i + len] != '	' && str[i + len])
				len++;
			words[j] = (char *)malloc((len + 1) * (sizeof(char)));
			if (words[j]== NULL)
				return (NULL);
			k = 0;
			while (k < len)
			{
				words[j][k] = str[i + k];
				k++;
			}
			words[j][k] = '\0';
			j++;
			i += len;
		}
		else 
			i++;
	}
	return (words);
}

int	count(char *str)
{
	int i;
	int wc;

	i =0;
	wc = 0;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '	')
		{
			while (str[i] == ' ' || str[i] == '	')
				i++;
			if (str[i] == '\0')
				break;
		}
		wc++;
		while (str[i] != ' ' && str[i] != '	' && str[i])
			i++;
	}
	return (wc);
}

char **ft_split(char *str)
{
	int	wc;
	char **words;

	wc = count(str) + 1;
	words = (char **)malloc(wc * sizeof(char *));
	if (words == NULL)
		return (NULL);
	words = arrg_words(words, str);
	words[wc] = NULL;
	return (words);
}

#include <stdio.h>

char **ft_split(char *str);

int main() {
  char *str = "This is a string with some   whitespace.";
  char **words = ft_split(str);

  if (words == NULL) {
    printf("Error allocating memory for words\n");
    return 1;
  }

  int i = 0;
  while (words[i] != NULL) {
    printf("%s\n", words[i]);
    i++;
  }

  // Free the allocated memory
  for (i = 0; words[i] != NULL; i++) {
    free(words[i]);
  }
  free(words);

  return 0;
}