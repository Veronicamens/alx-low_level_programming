#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words.
 */
int count_words(char *str)
{
	int i, count = 0, len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
			len++;
		if ((str[i] == ' ' || str[i + 1] == '\0') && len > 0)
		{
			count++;
			len = 0;
		}
	}

	return (count);
}

/**
 * allocate_words - Allocates memory for an array of words.
 * @str: The input string.
 * @count: The number of words.
 *
 * Return: Pointer to the allocated array.
 */
char **allocate_words(char *str, int count)
{
	char **words;
	int i;

	words = malloc((count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (i = 0; i < count; i++)
	{
		words[i] = malloc((word_len + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
				free(words[i]);
			free(words);
			return (NULL);
		}
	}

	return (words);
}

/**
 * extract_words - Extracts words from a string and stores them in an array.
 * @str: The input string.
 * @words: The array to store the words.
 */
void extract_words(char *str, char **words)
{
	int i, j = 0, k = 0, word_len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			words[j][k] = str[i];
			k++;
		}
		if ((str[i] == ' ' || str[i + 1] == '\0') && k > 0)
		{
			words[j][k] = '\0';
			k = 0;
			j++;
		}
	}
	words[j] = NULL;
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: Pointer to an array of strings (words), or NULL on failure.
 */
char **strtow(char *str)
{
	char **words;
	int count;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	count = count_words(str);
	words = allocate_words(str, count);
	if (words == NULL)
		return (NULL);

	extract_words(str, words);

	return (words);
}
