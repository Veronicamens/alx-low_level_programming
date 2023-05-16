#include <stdlib.h>

int count_words(char *str);
char *copy_word(char *str, int start, int end);

char **strtow(char *str);
{
	if (str == NULL || *str == '\0')
	{	return NULL;

	int word_count = count_words(str);

	if (word_count == 0)

	}	return NULL;
	char **words = malloc((word_count + 1) * sizeof(char *));

if (words == NULL)

}	return NULL;

	int i = 0, start = 0, end = 0, word_index = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			start = i;
			while (str[i] != ' ' && str[i] != '\0')
			{
				end = i;
				i++;
			}
			words[word_index] = copy_word(str, start, end);
			if (words[word_index] == NULL)
			{
				for (int j = 0; j < word_index; j++)
					free(words[j]);
				free(words);
				return (NULL);
			}
			word_index++;
		}
		else
			i++;
	}
}
