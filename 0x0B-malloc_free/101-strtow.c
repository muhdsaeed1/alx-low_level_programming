#include "main.h"
#include <stdlib.h>

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * word_len - Locates the index marking the end of the
 *            first word contained within a string.
 * @str: The string to be searched.
 *
 * Return: The index marking the end of the initial word pointed to by str.
 */
int word_len(char *str)
{
	int index = 0, len = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		len++;
		index++;
	}

	return (len);
}

/**
 * count_words - Counts the number of words contained within a string.
 * @str: The string to be searched.
 *
 * Return: The number of words contained within str.
 */
int count_words(char *str)
{
	int index = 0, words = 0, len = 0;

	for (index = 0; *(str + index); index++)
		len++;

	for (index = 0; index < len; index++)
