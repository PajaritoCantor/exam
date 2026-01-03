#include <unistd.h>
#include <stdlib.h>
#include <string.h>

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 42
#endif

char	*ft_strdup(char *str){
	int len = 0;
	while (str[len])
		len++;
	char *dup = malloc(sizeof(char) * len + 1);
	char *ptr = dup;
	while (*str)
		*ptr++ = *str++;
	*ptr = '\0';
	return (dup);
}

char	*get_next_line(int fd){
	static char	buffer[BUFFER_SIZE];
	char		line[70000];
	static int	b_pos;
	static int	b_read;
	int i = 0;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return NULL;
	while (1){
		if (b_pos >= b_read){
			b_read = read(fd, buffer, BUFFER_SIZE);
			b_pos = 0;
			if (b_read <= 0)
				break ;
		}
		line[i++] = buffer[b_pos++];
		if (buffer[b_pos - 1] == '\n')
			break ;
	}
	line[i] = '\0';
	if (i == 0)
		return NULL;
	return (ft_strdup(line));
}