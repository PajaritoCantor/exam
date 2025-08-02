#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

char		**ft_split(char *str)
{
    int     i = 0;
    int     j;
    int     k = 0; 
	char	**split;

	if (!(split = (char **)malloc(sizeof(char *) * 256)))
		return (NULL);
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        i++; 

	while (str[i])
	{
		j = 0;
		if (!(split[k] = (char *)malloc(sizeof(char) * 4096)))
			return (NULL);

		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
			split[k][j++] = str[i++];

        while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
            i++;
		split[k][j] = '\0';
		k ++;
	}
	split[k] = NULL;
	return (split);
}
