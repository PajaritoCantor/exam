int main (int ac, char **av)
{
	if (!ac == 2)
		return (printf("ERROR args"), 1);
	char	*word = av[1];
	int	len_word = strlen(word);
	char	*input = malloc(1);
	int	buffer_size = 1024;
	char	*buffer = malloc(buffer_size);
}
