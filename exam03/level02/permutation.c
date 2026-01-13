#include <stdio.h>
#include <stdlib.h>

void	ft_sort(char *str){
	int i = 0;
	while (str[i]){
		int j = i + 1;
		while (str[j]){
			if (str[i] > str[j]){
				char tmp = str[i];
				str[i] = str[j];
				str[j] = tmp;
			}
			j++;
		}
		++i;
	}
}

void	permutation(char *str, char *res, int res_index, int max_index, char *tab){
	if (res_index == max_index){
		printf("%s\n", res);
		return ;
	}
	int i = 0;
	while (i < max_index){
		if (tab[i] == 0){
			res[res_index] = str[i];
			tab[i] = 1;
			permutation(str, res, res_index + 1, max_index, tab);
			tab[i] = 0;
		}
		++i;
	}
}

int main (int ac, char **av){
	if (ac != 2)
		return 1;
	ft_sort(av[1]);
	int i = 0;
	while (av[1][i])
		++i;
	char *res = calloc(sizeof(char), (i + 1));
	char *tab = calloc(sizeof(char), (i + 1));
	permutation(av[1], res, 0, i, tab);
	free(res);
	free(tab);
	return 0;
}
