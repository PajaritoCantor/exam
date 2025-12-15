#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_strncmp(char *p, char *word, int n)
{
	while (n-- && *p && *p == *word)
		p++, word++;
	return (n < 0) ? 0 : *p - *word;
}

int main (int ac, char **av)
{
	if (ac != 2)
		return (printf("ERROR args"), 1);
	char	*word = av[1];
	int	len_word = strlen(word);
	char	*input = malloc(1);
	int	buffer_size = 1024;
	char	*buffer = malloc(buffer_size);
	int	b_read;
	int	size_total = 0;

	while ((b_read = read(0, buffer, buffer_size)) > 0)
	{
		char *tmp = realloc(input, size_total + b_read + 1);
		input = tmp;
		int i = 0;
		while (i < b_read)
		{
			input[size_total + i] = buffer[i];
			i++;
		}
		size_total += b_read;
		input[size_total] = '\0';
	}
	free(buffer);
	char *ptr = input;
	while (*ptr){
		if ((ft_strncmp(ptr, word, len_word)) == 0){
			int i = 0;
			while (i < len_word){
				ptr[i] = '*';
				i++;
			}
				ptr += len_word;
		}
		else
			ptr++;
	}
	printf("%s", input);
	free(input);
	return 0;
}
